/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:54:46 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/03 10:12:08 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

BOOL	ft_isalpha(const char c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (T);
	return (F);
}
