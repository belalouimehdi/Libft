/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_int_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 17:48:34 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/05 18:53:18 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/list.h"

t_int_list		*ft_new_int_list(const intmax_t nbr)
{
	t_int_list		*ret;

	if (!(ret = malloc(sizeof(*ret))))
		return (NULL);
	ret->data = nbr;
	ret->next = NULL;
	return (ret);
}
