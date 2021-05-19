/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:09:27 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/06 16:17:13 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	ft_getword_help(void)
{
	ft_printf("\n\nft_getword\n\n"
	"\tUsage:\tft_getword(const char *str, const int idword"
	", const char separator) ==> return char*\n\n"
	"Description:\n\n"
	"\tExtract a sequence of characters from a string, the parameters to pass "
	"are the character string, the position of the string to extract and the "
	"separator.\n\n"
	"\tNB: the returned string will be without the separator.\n\n\n"
	"Exemple\n\n\n"
	"\tchar *str\t\t= \"-c 3 -a -p /some/path --help -h\";\n"
	"\tchar separator\t\t= '-';\n"
	"\tchar *ret\t\t= ft_getword(str, 0, separator);\n\n"
	"\tft_printf(\"The String in the position [%%d] is [%%s].\","
	"ret, 0, separator);\n\n\n" 
	"\tOutput shell ==> The String in the position [0] is [c 3].\n\n\n" 
	"Autor\t: Belaloui Mehdi\t mail\t: mehdi@belaloui.com\n\n");
}

char	*ft_getword(const char *str, const int idword, const char separator)
{
	char	*result;
	size_t	pt_w;
	size_t	lenword;
	char	*tmp;

	if (!str || idword < 0)
		return (NULL);
	if ((int)(pt_w = ft_getfirstindexword(str, idword, separator)) < 0)
		return (NULL);
	lenword = ft_getlenword(str, pt_w, separator);
	result = ft_strcut(str, pt_w, (pt_w + lenword));
	result[lenword++] = '\0';
	tmp = result;
	result = ft_strtrim(tmp);
	return (result);
}
