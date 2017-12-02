/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memlloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 05:06:16 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/27 02:40:05 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*result;

	if (size > 2147483647)
		return (NULL);
	result = (void *)malloc((size + 1) * sizeof(*result));
	if (result == NULL)
		return (NULL);
	ft_memset(result, '\0', size + 1);
	return ((void *)result);
}
