/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_int_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 11:34:54 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/16 16:41:16 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/list.h"

/*
** pas besoin de faire le deplacement de pointeur il ce fait automatiquement
*/

void	ft_clear_int_list(t_int_list **list)
{
	while (*list)
		ft_dell_bgn_int_list(list);
}
