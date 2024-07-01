/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 23:18:53 by florian           #+#    #+#             */
/*   Updated: 2024/06/30 00:08:17 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	isnumber(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_len(char *str)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (str[i])
	{
		if ((nb == 0) && (!isnumber(str[i])))
			i++;
		else if (isnumber(str[i]))
		{
			nb++;
			i++;
		}
		else
			break ;
	}
	return (nb);
}

int	pow_ten(int pow)
{
	int	result;

	result = 1;
	while (pow > 0)
	{
		result *= 10;
		pow--;
	}
	return (result);
}

void	init(char *str, int *i, int *signe)
{
	*signe = 1;
	while (str[*i] == ' ')
		(*i)++;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*signe *= -1;
		(*i)++;
	}
}

int	ft_atoi(char *str)
{
	int	nb;
	int	signe;
	int	i;
	int	pow;

	nb = 0;
	i = 0;
	init(str, &i, &signe);
	pow = ft_len(str + i) - 1;
	while (str[i])
	{
		if (isnumber(str[i]))
		{
			nb += (str[i] - '0') * pow_ten(pow);
			pow--;
			i++;
		}
		else
			break ;
	}
	return (nb * signe);
}
