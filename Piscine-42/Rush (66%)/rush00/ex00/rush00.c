/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:21:09 by opoure            #+#    #+#             */
/*   Updated: 2024/06/29 15:37:54 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_draw_line(char a, char b, int n)
{
	int	i;

	i = 1;
	ft_putchar(a);
	while (i < n)
	{
		ft_putchar(b);
		i++;
	}
	if (i < (n + 1))
		ft_putchar(a);
}

void	rush(int x, int y)
{
	int	xi;
	int	yi;

	if (x < 0 || y < 0)
		return ;
	yi = 0;
	xi = 1;
	while (yi != y)
	{
		if (xi == 1)
		{
			ft_draw_line('o', '-', (x - 1));
			xi++;
		}
		else if (yi != 0 && yi != y - 1)
		{
			ft_draw_line('|', ' ', (x - 1));
			xi++;
		}
		else
		{
			ft_draw_line('o', '-', (x - 1));
			xi++;
		}
		ft_putchar('\n');
		yi++;
	}
}
