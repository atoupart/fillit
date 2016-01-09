# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atoupart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 10:08:38 by atoupart          #+#    #+#              #
#    Updated: 2016/01/09 18:09:12 by atoupart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

FTC = main.c\
	  ft_error.c

FTO = $(FTC:.c=.o)

LIB = fillit.h

EXE = libft.a

all: $(NAME)

rec: re clean

$(NAME):
		@$(CC) $(CFLAGS) -c $(FTC)
		@$(CC) $(CFLAGS) $(FTO) -I $(LIB) $(EXE) -o $(NAME)

clean:
		@$(RM) $(FTO)

fclean: clean
		@$(RM) $(NAME)

.PHONY: clean fclean
