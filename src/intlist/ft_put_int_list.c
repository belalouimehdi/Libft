/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_int_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 18:13:58 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/05 18:15:16 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/list.h"

void	ft_put_int_list(const t_int_list *list)
{
	ft_printf("\n - affiche list <INT>.\n");
	if (ft_is_empty_int_list(list))
		ft_printf("[∅].");
	else
	{
		ft_printf(" - [");
		while (list)
		{
			ft_printf("%d", list->data);
			list = list->next;
			if (list)
				ft_printf(",");
		}
		ft_printf("].");
	}
}
