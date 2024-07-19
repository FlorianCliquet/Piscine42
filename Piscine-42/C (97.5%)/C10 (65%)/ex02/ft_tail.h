/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:36:34 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:36:35 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H

# define FT_TAIL_H

# include <errno.h>
# include <fcntl.h>
# include <libgen.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define BUFFER_SIZE 4096

# define ERROR_0 ": option requires an argument -- 'c'\n"
# define ERROR_00 "Try '"
# define ERROR_000 " --help' for more information.\n"

# define ERROR_1 ": invalid number of bytes: ‘"

# define ERROR_3 ": cannot open '"

# define ERROR_4 "' for reading: "

# define DIR_STD_IN ": error reading 'standard input': Is a directory"

# define ERROR_5 ": error reading '"

# define ERROR_6 "': Is a directory"

/*FILE_READER*/
char	*fill_file_content(int *len, unsigned int *size, int fd, char *buffer);

char	*file_content_reader(int fd, unsigned int *size);

int		nfile_reader(char *path, unsigned int n, int multiple, int error);

int		ten_line_file_reader(char *path, int multiple);

/*FT_DISPLAY*/
void	ft_display(char *str, int output, int n);

void	ft_display_name(char *name);

void	not_valid_input(char **av);

void	ft_display_wrong_name(char *name, char **av);

void	display_directory(char *path, int multiple, int error, char **av);

/* FT_DISPLAY_DIR */

void	ft_display_wrong_directory(char *name, char **av);

/*FT*/
int		ft_atoi(char *str);

int		ft_strcmp(char *s1, char *s2);

int		ft_strlen(char *str);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

/*FT_TAIL*/
void	tail_without_option(void);

int		tail_with_option_c(int ac, char **av, int n);

int		tail_file(int ac, char **av);

/* FT_TAIL_HELPER*/

void	writing_buffer(int num_bytes, int size, char *file_content, char **av);

char	*init_std(int *size, int *len, char *buffer);

void	need_back_space(int *j, int *isFirst);

#endif