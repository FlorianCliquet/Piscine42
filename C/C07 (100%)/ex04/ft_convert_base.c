/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:42:36 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/05 19:59:45 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check(char *base)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (base[i])
	{
		c = base[i];
		if (c == '-' || c == '+'
			|| c == ' ' || (c >= 9 && c <= 13))
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

char	*skip_whitespace_and_signs(char *str, int *neg)
{
	*neg = 1;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			*neg *= -1;
		str++;
	}
	return (str);
}

unsigned int	base_to_dec(char *str, char *base, int basesize)
{
	unsigned int	n;
	unsigned int	nb;
	int				val;

	nb = 0;
	while (*str)
	{
		n = 0;
		while (base[n] != 0 && base[n] != *str)
			n++;
		if (base[n] == *str)
			val = n;
		else
			val = -1;
		if (val == -1 || val >= basesize)
			return (nb);
		nb = (basesize * nb) + (unsigned int)val;
		str++;
	}
	return (nb);
}

char	*dec_to_base(unsigned int nb, char *base, int basesize, int neg)
{
	unsigned int		len;
	unsigned int		tmp;
	unsigned int		zero;
	char				*str;

	zero = (nb == 0);
	len = 1 + (neg == -1 && zero != 1);
	tmp = nb / basesize;
	while (tmp != 0)
	{
		len++;
		tmp /= basesize;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (len--)
	{
		str[len] = base[nb % basesize];
		nb /= basesize;
	}
	if (neg == -1 && zero != 1)
		str[0] = '-';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				base_from_size;
	int				base_to_size;
	int				neg;
	unsigned int	nb;

	base_from_size = check(base_from);
	base_to_size = check(base_to);
	if (base_from_size == 0 || base_to_size == 0)
		return (0);
	nbr = skip_whitespace_and_signs(nbr, &neg);
	nb = base_to_dec(nbr, base_from, base_from_size);
	return (dec_to_base(nb, base_to, base_to_size, neg));
}
