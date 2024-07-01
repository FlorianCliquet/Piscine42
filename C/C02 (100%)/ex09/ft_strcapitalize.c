/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 22:44:54 by florian           #+#    #+#             */
/*   Updated: 2024/06/27 00:04:50 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_char_is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

char	ft_char_to_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	ft_char_to_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] != '\0')
	{
		n = i - 1;
		if ((i == 0) && ft_char_is_numeric(str[i]))
		{
			str[i] = ft_char_to_uppercase(str[i]);
		}
		else if (!ft_char_is_alpha(str[n]) && ! ft_char_is_numeric(str[n]))
		{
			str[i] = ft_char_to_uppercase(str[i]);
		}
		else if (ft_char_is_alpha(str[i]))
		{
			str[i] = ft_char_to_lowercase(str[i]);
		}
		i++;
	}
	return (str);
}
