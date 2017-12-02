# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 21:48:22 by mbelalou          #+#    #+#              #
#    Updated: 2017/11/30 19:17:09 by mbelalou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

FLAGES	=	-c -Wall -Wextra -Werror

SRCS	=	ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memccpy.c\
			ft_memmove.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strlen.c\
			ft_strdup.c\
			ft_strcpy.c\
			ft_strncpy.c\
			ft_strcat.c\
			ft_strncat.c\
			ft_strlcat.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strstr.c\
			ft_strnstr.c\
			ft_strcmp.c\
			ft_strncmp.c\
			ft_atoi.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_memalloc.c\
			ft_memdel.c\
			ft_strnew.c\
			ft_strdel.c\
			ft_strclr.c\
			ft_striter.c\
			ft_striteri.c\
			ft_strmap.c\
			ft_strmapi.c\
			ft_strequ.c\
			ft_strnequ.c\
			ft_strsub.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_strsplit.c\
			ft_itoa.c\
			ft_putchar.c\
			ft_putstr.c\
			ft_putendl.c\
			ft_putnbr.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_lstnew.c\
			ft_lstdelone.c\
			ft_lstdel.c\
			ft_lstadd.c\
			ft_lstiter.c\
			ft_lstmap.c\
			ft_isblank.c\
			ft_islower.c\
			ft_isupper.c\
			ft_isempty.c\
			ft_intochar.c\
			ft_chartoint.c\
			ft_nbrlen.c\
			ft_comptword.c\
			ft_getword.c\
			ft_strcut.c\
			ft_max.c\
			ft_min.c\
			ft_putmat.c\
			ft_matlen.c\
			ft_abs.c\


BIN		=	ft_abs.o\
			ft_atoi.o\
			ft_bzero.o\
			ft_chartoint.o\
			ft_comptword.o\
			ft_getword.o\
			ft_intochar.o\
			ft_isalnum.o\
			ft_isalpha.o\
			ft_isascii.o\
			ft_isblank.o\
			ft_isdigit.o\
			ft_isempty.o\
			ft_islower.o\
			ft_isprint.o\
			ft_isupper.o\
			ft_itoa.o\
			ft_lstadd.o\
			ft_lstdel.o\
			ft_lstdelone.o\
			ft_lstiter.o\
			ft_lstmap.o\
			ft_lstnew.o\
			ft_matlen.o\
			ft_max.o\
			ft_memalloc.o\
			ft_memccpy.o\
			ft_memchr.o\
			ft_memcmp.o\
			ft_memcpy.o\
			ft_memdel.o\
			ft_memmove.o\
			ft_memset.o\
			ft_min.o\
			ft_nbrlen.o\
			ft_putchar.o\
			ft_putchar_fd.o\
			ft_putendl.o\
			ft_putendl_fd.o\
			ft_putmat.o\
			ft_putnbr.o\
			ft_putnbr_fd.o\
			ft_putstr.o\
			ft_putstr_fd.o\
			ft_strcat.o\
			ft_strchr.o\
			ft_strclr.o\
			ft_strcmp.o\
			ft_strcpy.o\
			ft_strcut.o\
			ft_strdel.o\
			ft_strdup.o\
			ft_strequ.o\
			ft_striter.o\
			ft_striteri.o\
			ft_strjoin.o\
			ft_strlcat.o\
			ft_strlen.o\
			ft_strmap.o\
			ft_strmapi.o\
			ft_strncat.o\
			ft_strncmp.o\
			ft_strncpy.o\
			ft_strnequ.o\
			ft_strnew.o\
			ft_strnstr.o\
			ft_strrchr.o\
			ft_strsplit.o\
			ft_strstr.o\
			ft_strsub.o\
			ft_strtrim.o\
			ft_tolower.o\
			ft_toupper.o\

all		:	$(NAME)

$(NAME)	:	$(BIN) libft.h
			gcc $(FLAGES) $(SRCS) -I.
			ar rc $(NAME) $(BIN)
			ranlib $(NAME) 

clean	:
			rm -fr $(BIN)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all
