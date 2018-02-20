/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_to_decimal_v2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 18:17:35 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/13 20:15:04 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_base_to_decimal_v2(const char *str, const int str_base)
{
	int		pt;
	size_t	nbr_ret;
	char	*temp;

	if ((str_base <= 1 || str_base > 16) && (str == NULL))
		return (0);
	nbr_ret = 0;
	pt = -1;
	temp = (char *)str;
	while (temp[++pt])
	{
		if (ft_isupper(str[pt]))
			temp[pt] = ft_tolower(temp[pt]);
		if (!ft_is_elem_base(temp[pt], str_base))
			return (0);
		nbr_ret = (nbr_ret * str_base) + ft_get_char_base(temp[pt]);
	}
	return (nbr_ret);
}
