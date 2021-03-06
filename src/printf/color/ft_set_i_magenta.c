/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_i_magenta.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <mbelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:47:37 by mbelalou          #+#    #+#             */
/*   Updated: 2018/10/10 15:11:42 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

void	ft_set_i_magenta(void)
{
	char	*str;
	int		pt;

	pt = -1;
	str = "\033[30;45m";
	while (str[++pt])
		ft_put_buf(str[pt], ING);
}
