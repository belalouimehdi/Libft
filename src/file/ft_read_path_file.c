/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_path_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:52:51 by mbelalou          #+#    #+#             */
/*   Updated: 2018/09/14 16:13:38 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "charlist.h"

BOOL	ft_read_path_file(const char *path, t_charlist **file)
{
	if (!path || !file)
		return (F);
	return (ft_read_fd_file(ft_open_r_file(path), file) ? T : F);
}
