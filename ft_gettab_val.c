/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gettab_val.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 11:26:23 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/07 11:28:39 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_gettab_val(const char *tab, const int val)
{
	if ((0 > val || val >= (int)ft_strlen(tab)) || !tab)
		return (0);
	return (tab[val]);
}
