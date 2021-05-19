/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 10:14:55 by mbelalou          #+#    #+#             */
/*   Updated: 2018/09/14 16:08:56 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

# include "libft.h"

# define BUFF_SIZE	4096
# define MAX_FD		4864
# define ERROR_path_file -1
# define ERROR_FD       -2

typedef struct			s_list_fd
{
	int					fd;
	char				*rest;
	struct s_list_fd	*next;
}						t_list_fd;

int						ft_open_r_file(const char *path_file);
int						get_next_line(const int fd, char **line);
int						ft_open_r_iile(char *path_file);
#endif
