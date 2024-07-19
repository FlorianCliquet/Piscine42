/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:37:39 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:37:40 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_hexdump.h"

int	main(int argc, char **argv)
{
	int					i;
	t_hexdump_handle	handle;

	i = 0;
	handle = get_option(argc, argv);
	if (!check_flag(argv))
		return (1);
	if (handle.no_file)
		ft_hexdump_no_file(&handle, &i);
	else
		ft_hexdump_normal(&handle);
	return (0);
}
