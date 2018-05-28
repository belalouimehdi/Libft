/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_to_int_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:01:24 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/22 15:57:39 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/list.h"

t_int_list	*ft_tab_to_int_list(intmax_t *tab, size_t size)
{
	t_int_list	*list;
	size_t		pt;

	list = NULL;
	pt = 0;
	while (pt < size)
		ft_add_end_int_list(tab[pt++], &list);
	return (list);
}
