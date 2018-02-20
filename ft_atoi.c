/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:52:45 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/13 19:15:34 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	char	*s;
	long		signe;

	s = (char *)str;
	while (*s && ((*s < 33 && *s != 27) && *s != '\200'))
		s++;
	signe = 1;
	if (*s == '-' || *s == '+')
	{
		signe = (*s == '-') ? -1 : 1;
		s++;
	}
	return ((*s) ? (long)signe * ft_base_to_decimal(s, DECIMAL) : 0);
}
