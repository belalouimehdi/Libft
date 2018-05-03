/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_libft.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 12:18:26 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/03 15:08:49 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./inc/libft.h"
#include "stdio.h"

void		test_chartoint()
{
	char		index;

	index = '~';
	while (index >= 0)
	{
		if ((index % 8 == 0))
			ft_putstr("\n");
		ft_putnbr(ft_chartoint(index));
		ft_putstr("\t");
		index--;
	}
}

void		test_inttochar()
{
	int		index;

	index = 0;
	while (index < 200)
	{
		if ((index % 12 == 0))
			ft_putstr("\n");
		ft_putchar(ft_intochar(index));
		ft_putstr("\t");
		index++;
	}
}
void	test_bool()
{
	BOOL b = T;

	int i = T;
	if (i == F)
		ft_putstr("vrai");
	else
		ft_putstr("faux");
}

void	test_comptword()
{
	printf(" nbr a in str = %zu\n", ft_comptword("abbhsaa", ' ' ));
}

void	test_gettab_val()
{
	int cp = -2;
	while (cp < 10)
		printf(" c :  %c\n", ft_gettab_val("abcdef", cp++));
	printf(" c :  %c\n", ft_gettab_val(NULL,0));
}

void	test_gettab_index()
{
	printf(" index :  %ld\n", ft_gettab_index(NULL,0));
	printf(" index :  %ld\n", ft_gettab_index("abcdef",0));
	printf(" index :  %ld\n", ft_gettab_index(NULL,5));
	printf(" index :  %ld\n", ft_gettab_index("abcdef", 'a'));
	printf(" index :  %ld\n", ft_gettab_index("abcdef", 'b'));
	printf(" index :  %ld\n", ft_gettab_index("abcdef", 'f'));
	printf(" index :  %ld\n", ft_gettab_index("abcdef", 'g'));
	printf(" index :  %ld\n", ft_gettab_index("abcdef", 'h'));
}

void	test_fill_elem()
{
	char *str = ft_memalloc(8);
	//ft_bzero(str,3);
	char temp[] = "12345678";
	ft_fill_elem(6, str, temp, 1 );

	printf("\n%s,  %s\n",temp, str);
}

int		main()
{
//	int		test_ok;

//	test_ok = 0;
	test_chartoint();
	test_inttochar();
	test_comptword();
	test_gettab_val();
//	test_gettab_index();

	test_fill_elem();

	return (0);
}
