/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_to_decimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 18:17:21 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/12 15:48:47 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long				ft_base_to_decimal(const char *str, int str_base)
{
	int		pt;
	long	nbr_ret;
	char	*temp;

	if ((str_base <= 1 || str_base > 16) || (str == NULL) ||
			(str[0] == '-') || str[0] == '+')
		return (0);
	nbr_ret = 0;
	pt = -1;
	temp = (char *)str;
	while (temp[++pt])
	{
		if (ft_isupper(str[pt]))
			temp[pt] = temp[pt] + ('a' - 'A');
		if (!ft_is_elem_base(temp[pt], str_base))
			return (nbr_ret);
		nbr_ret = (nbr_ret * str_base) + ft_get_char_base(temp[pt]);
	}
	return (nbr_ret);
}
