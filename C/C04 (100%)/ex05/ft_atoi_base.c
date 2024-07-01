/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:09:08 by fcliquet          #+#    #+#             */
/*   Updated: 2024/06/30 17:51:59 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	digit(char s, char *base)
{
	int	n;

	n = 0;
	while (base[n] != 0 && base[n] != s)
		n++;
	if (base[n] == s)
		return (n);
	return (-1);
}

int	is_invalid_base_char(char c)
{
	return (c == '-' || c == '+' || c == ' ' || (c >= 9 && c <= 13));
}

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (is_invalid_base_char(base[i]))
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

int	ft_atoi_base(char *str, char *base)
{
	int	basesize;
	int	nb;
	int	neg;
	int	val;

	basesize = check(base);
	if (basesize == 0)
		return (0);
	str = skip_whitespace_and_signs(str, &neg);
	nb = 0;
	while (*str)
	{
		val = digit(*str, base);
		if (val == -1 || val >= basesize)
			break ;
		nb = (basesize * nb) + val;
		str++;
	}
	return (nb * neg);
}
