/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:56:46 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/25 11:18:50 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		ft_putstr("NULL");
	else
	{
		while (str[i])
			ft_putchar((unsigned char)str[i++]);
	}
}
