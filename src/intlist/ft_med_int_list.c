/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_med_int_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:13:28 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/23 14:48:18 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/list.h"

long double	ft_med_int_list(t_int_list *list)
{
	long double	med;
	intmax_t	*temp_tab;
	int			size;

	size =  ft_size_int_list(list);
	temp_tab = ft_intmax_list_to_tab(list);
	ft_mergesort_tab(temp_tab, size);
	med = 0;
	if (size % 2)
		med = temp_tab[(size / 2)];
	else
		ft_avg_tab(temp_tab, &med, size);
	return (med);
}
