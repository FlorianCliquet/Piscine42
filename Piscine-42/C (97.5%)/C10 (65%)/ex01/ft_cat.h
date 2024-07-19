/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:38:20 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:38:21 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H

# define FT_CAT_H

# include <errno.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define BUFFER_SIZE 29000
# define ERROR_0 "Error while writing to the output\n"
# define ERROR_1 "ft_cat: "
# define ERROR_2 ": "

void	ft_display_error(char *str, int output);

int		ft_strlen(char *str);

int		ft_display_file(char *path);

#endif
