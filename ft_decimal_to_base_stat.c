/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_to_base_stat.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 14:54:39 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/12 17:41:04 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_decimal_to_base_stat(char *tab_ret, const long nbr,
		const int base, const int form)
{
	int		len_ret;
	char	*elem_base;
	int		size_nbr_ret;
	unsigned long	nbr_temp;

	nbr_temp =  nbr;// : -nbr;
	if (base <= 1 || base > 16)
		return (0);
	elem_base = (form == LOWER) ? "0123456789abcdef" : "0123456789ABCDEF";
	size_nbr_ret = ft_get_len_value_base(nbr, base);
	len_ret = ft_strlen(tab_ret);
	if (!tab_ret || (len_ret < size_nbr_ret))
		return (0);
	ft_memset(tab_ret, ' ', len_ret);
	tab_ret[size_nbr_ret] = '\0';
	while (size_nbr_ret--)
	{
		tab_ret[size_nbr_ret] = ft_gettab_val(elem_base, nbr_temp % base);
		nbr_temp = nbr_temp / base;
	}
	return (tab_ret);
}
