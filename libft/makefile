# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adhondt <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 12:16:27 by adhondt           #+#    #+#              #
#    Updated: 2018/03/22 12:55:51 by adhondt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_bzero.c ft_isalnum.c ft_atoi.c ft_isascii.c \
ft_isdigit.c ft_isintab.c ft_isprint.c ft_itoa.c ft_memalloc.c ft_memccpy.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c \
ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c \
ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c \
ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c \
ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c \
ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c \
ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c \
ft_tolower.c ft_toupper.c ft_isup.c ft_islow.c ft_lstadd.c ft_lstdel.c \
ft_lstdelone.c ft_lstiter.c ft_lstnew.c ft_find_next_sqrt.c ft_print_tabtab.c \
ft_strccpy.c ft_strcdup.c ft_strcjoin.c ft_strclen.c ft_strnjoin.c \
ft_strndup.c ft_strchruno.c ft_itoa_base.c ft_n.c onlyins.c ft_strnewc.c \
ft_tabtabdup.c ft_tablen.c ft_strrchrrev.c ft_initializetab.c ft_sorttab.c \
ft_strjoin_free.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c -Werror -Wall -Wextra $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
