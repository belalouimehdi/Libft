/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_int_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 18:26:13 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/05 18:42:24 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/list.h"

void	ft_clear_int_list(t_int_list **list)
{
	t_int_list *pt_list;
	t_int_list *temp_list;

	pt_list = *list;
	while (pt_list)
	{
		temp_list = pt_list;
		pt_list = pt_list->next;
		free(temp_list);
	}
}
