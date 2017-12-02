/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:09:27 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/30 17:25:00 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getword(const char *str, const int index, const char c)
{
	char	*result;
	size_t	pt;
	int		cp;

	pt = 0;
	cp = 0;
	result = ft_strnew(ft_strlen(str));
	if (result == NULL || str == NULL)
		return (0);
	while (str[pt] && cp < index)
	{
		while (str[pt] == c)
			pt++;
		if (pt < ft_strlen(str))
			cp++;
		while (str[pt] != c)
			pt++;
	}
	while (str[pt] == c)
		pt++;
	cp = 0;
	while (str[pt] != c)
		result[cp++] = str[pt++];
	result[cp++] = '\0';
	return (result);
}
