/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_len_value_base.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 10:14:55 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/12 10:17:51 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_get_len_value_base(const int nbr, const int exit_base)
{
	int len;
	int temp_nbr;

	temp_nbr = nbr;
	len = 1;
	while (temp_nbr / exit_base)
	{
		temp_nbr = (temp_nbr / exit_base);
		len++;
	}
	return (len);
}
