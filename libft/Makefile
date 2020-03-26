# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chcoutur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/04 18:12:15 by chcoutur          #+#    #+#              #
#    Updated: 2018/12/04 18:12:18 by chcoutur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_memset.c			\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_memccpy.c		\
		ft_memmove.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_strcpy.c 		\
		ft_strdup.c 		\
		ft_strlen.c 		\
		ft_strncpy.c		\
		ft_strcat.c			\
		ft_strlcat.c		\
		ft_strncat.c		\
		ft_strcmp.c			\
		ft_strncmp.c		\
		ft_atoi.c			\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strstr.c			\
		ft_strnstr.c		\
		ft_isalpha.c		\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_memalloc.c		\
		ft_memdel.c			\
		ft_strnew.c			\
		ft_strdel.c			\
		ft_strclr.c			\
		ft_striter.c		\
		ft_striteri.c		\
		ft_strmap.c			\
		ft_strmapi.c		\
		ft_strequ.c			\
		ft_strnequ.c		\
		ft_strsub.c			\
		ft_strjoin.c		\
		ft_strtrim.c		\
		ft_strsplit.c		\
		ft_itoa.c			\
		ft_putchar.c		\
		ft_putstr.c			\
		ft_putendl.c		\
		ft_putnbr.c			\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_lstnew.c			\
		ft_lstdelone.c		\
		ft_lstdel.c			\
		ft_lstadd.c			\
		ft_lstiter.c		\
		ft_lstmap.c			\
		ft_islowercase.c	\
		ft_isuppercase.c	\
		ft_swap.c			\
		ft_strrev.c			\
		ft_lstsize.c		\
		ft_range.c			\
		ft_iseven.c			\
		ft_isodd.c			\
		ft_abs.c			\
		ft_strjoin_free.c

OBJECT = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = includes/

all: $(NAME)

$(NAME): $(OBJECT) $(HEADER)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)
	@echo "\033[01;33m Compilation \033[01;32m OK \n ${NAME} created\033[00m"

%.o: %.c
	gcc $(FLAGS) -o $@ -c $< -I $(HEADER)

clean:
	@/bin/rm -f $(OBJECT)
	@echo "\033[0;31m All .o \033[01;33m  removed \033[00m"

fclean : clean
	@/bin/rm -f $(NAME)
	@echo "\033[0;31m $(NAME) \033[01;33m removed \033[00m"

re: fclean all
