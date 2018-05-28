/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avg_int_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 18:33:55 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/22 15:24:31 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/list.h"

BOOL	ft_avg_int_list(const t_int_list *list, long double *avg)
{
	intmax_t size;

	if (!list)
		return (F);
	size = 0;
	*avg = 0;
	while (list)
	{
		*avg += list->data;
		list = list->next;
		size++;
	}
	*avg /= size;
	return (T);
}
