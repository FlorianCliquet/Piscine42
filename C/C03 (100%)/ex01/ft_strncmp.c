/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:50:17 by fcliquet          #+#    #+#             */
/*   Updated: 2024/06/28 20:50:18 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (((s1[index] != '\0') || (s2[index] != '\0')) && (index < n))
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	if ((s1[index] != '\0') && (s2[index] == '\0') && (index < n))
		return (s1[index]);
	else if ((s1[index] == '\0') && (s2[index] != '\0') && (index < n))
		return (-s2[index]);
	else
		return (0);
}
