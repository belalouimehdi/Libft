# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 21:48:22 by mbelalou          #+#    #+#              #
#    Updated: 2018/04/23 14:18:29 by mbelalou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

FLAGES	=	-c -Wall -Wextra -Werror

SRCS	=	ft_abs.c\
			ft_atoi.c\
			ft_atoi_base.c\
			ft_atoi_base_v2.c\
			ft_atoi_v2.c\
			ft_base_to_decimal.c\
			ft_base_to_decimal_v2.c\
			ft_bzero.c\
			ft_chartoint.c\
			ft_comptword.c\
			ft_decimal_to_base_dynm.c\
			ft_decimal_to_base_stat.c\
			ft_udecimal_to_base_stat.c\
			ft_free_map.c\
			ft_get_char_base.c\
			ft_get_len_value_ubase.c\
			ft_get_len_value_base.c\
			ft_getfirstindexword.c\
			ft_getlenword.c\
			ft_gettab_index.c\
			ft_gettab_val.c\
			ft_getword.c\
			ft_intochar.c\
			ft_is_c_in_str.c\
			ft_is_elem_base.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isblank.c\
			ft_isdigit.c\
			ft_isempty.c\
			ft_islower.c\
			ft_isprint.c\
			ft_isupper.c\
			ft_itoa.c\
			ft_lstadd.c\
			ft_lstdel.c\
			ft_lstdelone.c\
			ft_lstiter.c\
			ft_lstmap.c\
			ft_lstnew.c\
			ft_matlen.c\
			ft_max.c\
			ft_memalloc.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memdel.c\
			ft_memmove.c\
			ft_memset.c\
			ft_min.c\
			ft_nbrlen.c\
			ft_unbrlen.c\
			ft_open_file.c\
			ft_put_buf.c\
			ft_putchar.c\
			ft_putchar_fd.c\
			ft_putendl.c\
			ft_putendl_fd.c\
			ft_putmat.c\
			ft_putnbr.c\
			ft_putnbr_fd.c\
			ft_putstr.c\
			ft_putstr_fd.c\
			ft_putwstr.c\
			ft_strcat.c\
			ft_strchr.c\
			ft_strclr.c\
			ft_strcmp.c\
			ft_strcpy.c\
			ft_strcut.c\
			ft_strdel.c\
			ft_strdup.c\
			ft_strequ.c\
			ft_striter.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlen.c\
			ft_strlower.c\
			ft_strmap.c\
			ft_strmapi.c\
			ft_strncat.c\
			ft_strncmp.c\
			ft_strncpy.c\
			ft_strnequ.c\
			ft_strnew.c\
			ft_strnew_empty.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strsplit.c\
			ft_strstr.c\
			ft_strsub.c\
			ft_strtrim.c\
			ft_strupper.c\
			ft_temporize.c\
			ft_tolower.c\
			ft_toupper.c\
			get_next_line.c\
			ft_wchar_to_string.c\
			ft_fill_elem.c\
			ft_strdup_stat.c\
			ft_get_mask.c\
			ft_wstrlen.c\
			ft_wstringlen.c\
			ft_wcharlen.c\


BIN		=	$(SRCS:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(SRCS) libft.h
			@gcc $(FLAGES) $(SRCS) -I.
			@ar rc $(NAME) $(BIN)
			@ranlib $(NAME) 
			@@echo the compilation of $(NAME) wase successful !

clean	:
			@rm -fr $(BIN)

fclean	:	clean
			@rm -f $(NAME)
			@echo the libft is totaly cleaned.

re		:	fclean all
