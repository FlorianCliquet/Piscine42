/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:21:09 by opoure            #+#    #+#             */
/*   Updated: 2024/06/29 15:38:01 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_draw(char a, char s, int n, int j)
{
	int	i;

	if (s == 'N')
		i = -1;
	else
		i = 0;
	ft_putchar(a + i);
	while (j < n)
	{
		if (i == 0)
			ft_putchar(' ');
		else
			ft_putchar(a);
		j++;
	}
	if (j < (n + 1))
		ft_putchar(a + (-1) * i);
}

void	ft_draw_line(char a, int n, int yi, int y)
{
	int	i;

	i = 1;
	if ((yi == 0) || (yi == (y - 1)))
		ft_draw(a, 'N', n, i);
	else
		ft_draw(a, ' ', n, i);
}

void	rush(int x, int y)
{
	int	yi;

        if (x < 0 || y < 0)
                return ;
	yi = 0;
	while (yi != y)
	{
		ft_draw_line('B', (x - 1), yi, y);
		ft_putchar('\n');
		yi++;
	}
}
