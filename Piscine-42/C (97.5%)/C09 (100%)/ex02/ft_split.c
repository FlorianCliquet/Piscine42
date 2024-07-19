/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 01:17:13 by florian           #+#    #+#             */
/*   Updated: 2024/07/04 20:27:46 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

long unsigned int	strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	process_substrings(char *str, char *charset, char **result)
{
	int	i;
	int	j;
	int	start;

	j = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		start = i;
		while (str[i] && !is_separator(str[i], charset))
			i++;
		if (i > start)
		{
			result[j] = (char *)malloc(sizeof(char) * (i - start + 1));
			if (!result[j])
				return ;
			ft_strncpy(result[j], &str[start], i - start);
			result[j++][i - start] = '\0';
		}
	}
	result[j] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**result;

	if (!str || !charset)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (strlen(str) + 1));
	if (!result)
		return (NULL);
	process_substrings(str, charset, result);
	result[strlen(str)] = NULL;
	return (result);
}
