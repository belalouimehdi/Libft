/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:38:22 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/27 01:51:51 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	int pt;

	if (!s)
		return ;
	pt = 0;
	while (s[pt] != '\0')
	{
		ft_putchar_fd((unsigned char)s[pt], fd);
		pt++;
	}
}
