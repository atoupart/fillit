# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atoupart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 10:08:38 by atoupart          #+#    #+#              #
#    Updated: 2015/12/14 19:04:08 by atoupart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

FTC = ft_atoi.c\
		ft_bzero.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isspace.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putstr.c\
		ft_strcat.c\
		ft_strncat.c\
		ft_strchr.c\
		ft_strcmp.c\
		ft_strcpy.c\
		ft_strdup.c\
		ft_strlcat.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strncpy.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strstr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_memalloc.c\
		ft_putendl.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_memdel.c\
		ft_strnew.c\
		ft_strdel.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strsub.c\
		ft_strclr.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_strsplit.c\
		ft_lstnew.c\
		ft_lstadd.c\
		ft_lstdel.c\
		ft_lstdelone.c\
		ft_lstiter.c\
		ft_lstmap.c

FTO = $(FTC:.c=.o)

$(NAME):
		@$(CC) $(CFLAGS) -c $(FTC)
		@ar rc $(NAME) $(FTO)
		@ranlib $(NAME)

all: $(NAME)

clean:
		@$(RM) $(FTO)

fclean: clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean
