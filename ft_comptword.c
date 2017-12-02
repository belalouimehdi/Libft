/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comptmot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:48:33 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/29 15:37:06 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_comptword(const char *str, const char c)
{
	int		i;
	int		nbrmot;

	nbrmot = 0;
	if (str == NULL)
		return (nbrmot);
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			nbrmot++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (nbrmot);
}
