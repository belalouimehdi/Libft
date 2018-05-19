/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_bgn_int_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 18:22:46 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/19 16:40:49 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/list.h"

BOOL	ft_add_bgn_int_list(intmax_t nbr, t_int_list **list)
{
	t_int_list *temp_node;

	if (!(temp_node = ft_new_int_list(nbr)))
		return (F);
	if (ft_is_empty_int_list(*list))
		*list = temp_node;
	else
	{
		temp_node->next = *list;
		*list = temp_node;
	}
	return (T);
}