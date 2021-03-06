/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:58:37 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/03 10:12:56 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

BOOL	ft_isupper(const char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
