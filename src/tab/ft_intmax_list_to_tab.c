/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intmax_list_to_tab.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:49:42 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/22 16:01:16 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/tab.h"

intmax_t	*ft_intmax_list_to_tab(t_int_list *list)
{
	intmax_t	*tab_ret;
	int			size;

	if (!list)
		return (NULL);
	size = ft_size_int_list(list);
	tab_ret = malloc (sizeof (*tab_ret) * size);
	ft_int_list_to_tab(&tab_ret, list, size);
	return (tab_ret);
}
