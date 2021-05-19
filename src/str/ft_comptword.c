/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comptmot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:48:33 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/02 13:38:43 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	ft_comptword_help(void)
{
	ft_printf("\n\nft_comptword\n\n"
	"\tUsage:\tft_comptword(const char *str, const char separator) ==> "
	"return size_t\n\n"
	"Description:\n\n"
	"\tAllows to count the number of character sequences "
	"separated by one or more separator.\n"
	"\n\nExemple\n\n\n"
	"\tchar *str\t\t= \"-c 3 -a -p /some/path --help -h\";\n"
	"\tchar separator\t\t= '-';\n"
	"\tint ret\t\t\t= ft_comptword(str, separator);\n\n"
	"\tft_printf(\"You have %%d character sequences in your string.\",ret);\n\n\n" 
	"\tOutput shell ==> You have a 5 character sequence in your string.\n\n\n" 
	"Autor\t: Belaloui Mehdi\t mail\t: mehdi@belaloui.com\n\n");
}

size_t	ft_comptword(const char *str, const char separator)
{
	size_t	i;
	size_t	nbrmot;

	nbrmot = 0;
	if (str == NULL)
		return (nbrmot);
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == separator)
			i++;
		if (str[i])
			nbrmot++;
		while (str[i] && str[i] != separator)
			i++;
	}
	return (nbrmot);
}
