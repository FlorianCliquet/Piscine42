/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hanlde_grid_helper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:46:52 by florian           #+#    #+#             */
/*   Updated: 2024/07/14 16:02:15 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bsq.h"

int	min(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

void	my_strcpy(char *dest, const char *src)
{
	while (*src)
		*dest++ = *src++;
}

void	process(int i, int j, t_GridInfo *info)
{
	if (i == 0 || j == 0)
		info->dp[i][j] = 1;
	else
		info->dp[i][j] = min(info->dp[i - 1][j], info->dp[i][j - 1], info->dp[i
				- 1][j - 1]) + 1;
	if (info->dp[i][j] > info->max_size)
	{
		info->max_size = info->dp[i][j];
		info->max_row = i;
		info->max_col = j;
	}
}
