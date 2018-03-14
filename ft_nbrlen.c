/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 08:47:27 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/12 17:59:03 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

short		ft_nbrlen(intmax_t nbr)
{
	short ret;

	ret = 0;
	//ft_putnbr(nbr);
	if (nbr < MIN_INTMAX)
		return (19);
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		ret++;
	}
/*
	ft_putstr("\n");
	ft_putnbr(nbr);
	ft_putstr("\n");
*/
	return (ret);
}
