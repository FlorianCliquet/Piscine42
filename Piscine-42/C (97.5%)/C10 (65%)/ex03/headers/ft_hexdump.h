/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:38:08 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:38:10 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H

# define FT_HEXDUMP_H

/* INCLUDES */
# include <errno.h>
# include <fcntl.h>
# include <libgen.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/* DEFINED STRINGS */

# define ERROR_ILLEGAL_0 ": option requires an argument -- '"
# define ERROR_ILLEGAL_1 "'\nTry '"
# define ERROR_ILLEGAL_2 " --help' for more information.\n"

# define ERROR_IS_DIR "Is a directory\n"

# define ERROR_INPUT_FAIL ": all input file arguments failed\n"

/* DEFINED STRUCT */
typedef struct t_file_handle
{
	int				with_c;
	int				first_file;
	int				last_file;
	int				no_file;
	unsigned char	*random;
	int				std_in;
	char			**input;
	int				number_of_c;
}					t_hexdump_handle;

/* DEFINED PROTOTYPES */

/* GET_OPTION.C */

t_hexdump_handle	get_option(int argc, char **argv);

int					check_flag(char **argv);

/* FT_0/FT_1/FT_2.c */

void				ft_putchar(char c);

void				ft_putstr(char *str);

int					ft_strcmp(char *s1, char *s2);

int					ft_strlen(char *str);

void				ft_strncat(unsigned char *dest, unsigned char *src, int n);

int					ft_strncmp(unsigned char *s1, unsigned char *s2);

void				ft_strncpy(unsigned char *dest, unsigned char *src, int n);

int					is_printable(char str);

char				*ft_addchar(char *str, char c);

char				*ft_advancedcat(char *prefixe, char c, char *suffixe);

/* DISPLAY.C */

void				print_address(unsigned long address,
						t_hexdump_handle handle);

void				print_ascii(unsigned char *address, int offset);

void				print_buffer(t_hexdump_handle handle,
						unsigned char *sentence, int len, int *i);

void				display_error(char *str);

/* PRINT_SENTENCE.C*/
void				print_sentence(t_hexdump_handle handle,
						unsigned char sentence[16], int len, int *i);

/* CHECK.C */

int					check_valid(int *current, t_hexdump_handle handle,
						int *file, char **av);

void				check_file(t_hexdump_handle handle);

/* GET_BYTES.C */

int					get_bytes(t_hexdump_handle *handle,
						unsigned char sentence[16], int *current, int *file);

/* WRITE.C*/

int					write_random(t_hexdump_handle *handle, unsigned char *str,
						int *i);

void				null_str(unsigned char *str);

int					last(int i, t_hexdump_handle handle);

void				err(char *filename, char *base);

/* FT_HEXDUMP.C*/

void				ft_hexdump_normal(t_hexdump_handle *handle);

void				address(int *i, t_hexdump_handle *handle,
						unsigned char sentence[16], int len);

void				ft_hexdump_no_file(t_hexdump_handle *handle, int *i);

/* PRINT_HEX.C*/

void				print_hex_with_c(unsigned char *address, int offset);

void				print_hex_without_c(unsigned char *address, int offset);

#endif