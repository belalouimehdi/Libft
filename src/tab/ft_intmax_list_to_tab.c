/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intmax_list_to_tab.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:49:42 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/31 15:51:10 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/tab.h"

intmax_t	*ft_intmax_list_to_tab(t_int_list *list)
{
	intmax_t	*tab_ret;
	int			size;

	if (!list)
		return (NULL);
	size = ft_size_intlist(list);
	tab_ret = malloc(sizeof(*tab_ret) * (size * sizeof(intmax_t)));
	ft_int_list_to_tab(&tab_ret, list, size);
	return (tab_ret);
}
