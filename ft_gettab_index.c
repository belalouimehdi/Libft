/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gettab_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 11:59:32 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/09 12:02:06 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_gettab_index(const char *tab, const char c)
{
	long val;

	if (!tab || c == 0)
		return (-1);
	val = 0;
	while (tab[val] && tab[val] != c)
		++val;

/*	ft_putstr(">");
	ft_putnbr(val);
	ft_putstr("<");
*/
	if (tab[val] == c)
		return (val);
	return (-1);
}
