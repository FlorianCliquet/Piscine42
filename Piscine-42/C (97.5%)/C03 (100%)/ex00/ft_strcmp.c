/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:36:11 by fcliquet          #+#    #+#             */
/*   Updated: 2024/06/30 16:08:57 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] != '\0') || (s2[index] != '\0'))
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	if (s1[index] != '\0')
		return (s1[index]);
	else if (s2[index] != '\0')
		return (-1 * s2[index]);
	else
		return (0);
}
