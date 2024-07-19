/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:03:45 by florian           #+#    #+#             */
/*   Updated: 2024/07/16 17:22:00 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_strswap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	bubble_sort(char **tab, int size)
{
	int	i;
	int	j;
	int	sorted;

	i = 0;
	while (i < size - 1)
	{
		sorted = 1;
		j = 0;
		while (j < size - 1 - i)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				ft_strswap(&tab[j], &tab[j + 1]);
				sorted = 0;
			}
			j++;
		}
		if (sorted)
			break ;
		i++;
	}
}

void	ft_sort_string_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	bubble_sort(tab, i);
}
