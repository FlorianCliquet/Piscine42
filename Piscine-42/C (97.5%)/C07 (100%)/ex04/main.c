#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

void print_result(char *test_name, char *result, char *expected) {
    printf("%s%s\n", CYAN, test_name);
    printf("%sExpected: %s%s%s\n", YELLOW, RESET, expected, CYAN);
    printf("Result:   %s%s%s", RESET, result ? result : "(null)", CYAN);
    if ((result == NULL && expected == NULL) || (result && expected && strcmp(result, expected) == 0)) {
        printf(" %s[PASS]%s\n", GREEN, RESET);
    } else {
        printf(" %s[FAIL]%s\n", RED, RESET);
    }
    printf("%s---------------------------%s\n\n", BLUE, RESET);
}

int main(void)
{
    char *result;
    int num_tests = 0;
    int num_passed = 0;

    printf("%s%s\n\n", MAGENTA, "***** Base Conversion Tests *****");

    // Basic conversions
    result = ft_convert_base("2a", "0123456789abcdef", "0123456789");
    print_result("Hexadecimal 2a to Decimal", result, "42");
    num_tests++;
    if (result && strcmp(result, "42") == 0) num_passed++;
    free(result);

    result = ft_convert_base("42", "0123456789", "0123456789abcdef");
    print_result("Decimal 42 to Hexadecimal", result, "2a");
    num_tests++;
    if (result && strcmp(result, "2a") == 0) num_passed++;
    free(result);

    result = ft_convert_base("101010", "01", "0123456789");
    print_result("Binary 101010 to Decimal", result, "42");
    num_tests++;
    if (result && strcmp(result, "42") == 0) num_passed++;
    free(result);

    result = ft_convert_base("42", "0123456789", "01");
    print_result("Decimal 42 to Binary", result, "101010");
    num_tests++;
    if (result && strcmp(result, "101010") == 0) num_passed++;
    free(result);

    // Edge cases
    result = ft_convert_base("42", "", "0123456789");
    print_result("Invalid base_from (empty)", result, NULL);
    num_tests++;
    if (result == NULL) num_passed++;
    free(result);

    result = ft_convert_base("42", "0123456789", "0");
    print_result("Invalid base_to (single char)", result, NULL);
    num_tests++;
    if (result == NULL) num_passed++;
    free(result);

    result = ft_convert_base("42", "01234556789", "0123456789");
    print_result("Invalid base_from (repeated char)", result, NULL);
    num_tests++;
    if (result == NULL) num_passed++;
    free(result);

    result = ft_convert_base("42", "0123456789", "01234 6789");
    print_result("Invalid base_to (space)", result, NULL);
    num_tests++;
    if (result == NULL) num_passed++;
    free(result);

    result = ft_convert_base("4z", "0123456789abcdef", "0123456789");
    print_result("Invalid input (non-base char)", result, NULL);
    num_tests++;
    if (result == NULL) num_passed++;
    free(result);

    // Handling negative numbers
    result = ft_convert_base("-42", "0123456789", "0123456789abcdef");
    print_result("Negative decimal to hex", result, "-2a");
    num_tests++;
    if (result && strcmp(result, "-2a") == 0) num_passed++;
    free(result);

    result = ft_convert_base("-101010", "01", "0123456789");
    print_result("Negative binary to decimal", result, "-42");
    num_tests++;
    if (result && strcmp(result, "-42") == 0) num_passed++;
    free(result);

    // Large numbers
    result = ft_convert_base("4294967295", "0123456789", "0123456789abcdef");
    print_result("Large decimal to hex", result, "ffffffff");
    num_tests++;
    if (result && strcmp(result, "ffffffff") == 0) num_passed++;
    free(result);

    result = ft_convert_base("ffffffff", "0123456789abcdef", "0123456789");
    print_result("Large hex to decimal", result, "4294967295");
    num_tests++;
    if (result && strcmp(result, "4294967295") == 0) num_passed++;
    free(result);

    // Leading/trailing spaces and signs
    result = ft_convert_base("   \t\n  -+-+--42", "0123456789", "0123456789abcdef");
    print_result("Spaces and signs in input", result, "2a");
    num_tests++;
    if (result && strcmp(result, "2a") == 0) num_passed++;
    free(result);

    result = ft_convert_base("-+-+-42", "0123456789", "0123456789abcdef");
    print_result("Multiple signs", result, "-2a");
    num_tests++;
    if (result && strcmp(result, "-2a") == 0) num_passed++;
    free(result);

    // Base 10 to base 10
    result = ft_convert_base("12345", "0123456789", "0123456789");
    print_result("Decimal 12345 to Decimal", result, "12345");
    num_tests++;
    if (result && strcmp(result, "12345") == 0) num_passed++;
    free(result);

    printf("%s%s\n", MAGENTA, "***** End of Tests *****");

    // Recap
    printf("\n%s%sSummary:%s\n", MAGENTA, "***** ", RESET);
    printf("Total tests: %d\n", num_tests);
    printf("Tests passed: %d\n", num_passed);
    printf("Tests failed: %d\n", num_tests - num_passed);
    if (num_passed == num_tests) {
        printf("%sAll tests passed!%s\n", GREEN, RESET);
    } else {
        printf("%sSome tests failed.%s\n", RED, RESET);
    }

    return 0;
}
