/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_med_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:38:51 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/23 14:48:32 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/tab.h"

long double		ft_med_tab(intmax_t *tab, size_t size)
{
	long double	med;

	ft_mergesort_tab(tab, size);
	med = 0;
	if (size % 2)
		med = tab[(size / 2)];
	else
		ft_avg_tab(tab, &med, size);
	return (med);
}
