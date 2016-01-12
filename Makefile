# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atoupart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 10:08:38 by atoupart          #+#    #+#              #
#    Updated: 2016/01/12 17:39:01 by atoupart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

FTC = main.c\
	  ft_error.c\
	  ft_openfile_checker.c

FTO = $(FTC:.c=.o)

LIB = fillit.h

EXE = libft.a

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -c $(FTC)
		@$(CC) $(CFLAGS) $(FTO) -I $(LIB) $(EXE) -o $(NAME)

clean:
		@$(RM) $(FTO)

fclean: clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean
