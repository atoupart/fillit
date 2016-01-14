# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atoupart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 10:08:38 by atoupart          #+#    #+#              #
#    Updated: 2016/01/12 20:02:51 by atoupart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fillit

CC		= gcc
LLDB	= cc

CFLAGS	= -Wall -Wextra -Werror

RM		= /bin/rm -f

FTC		= main.c\
	  ft_error.c\
	  ft_openfile_checker.c\
	  print_string_tab.c

FTO		= $(FTC:.c=.o)

INC		= -I includes -I libft/includes

LIB		= -L libft -lft

EXE		= libft/libft.a

all: $(NAME)

$(NAME): make_libft $(FTO)
	@$(CC) $(CFLAGS) -c $(FTC)
	@$(CC) $(CFLAGS) $(FTO) -o $(NAME) $(INC) $(LIB)

.obj/%.o: srcs/%.c
	# @mkdir -p .obj
	$(CC) -c $< -o $@ $(FLAGS) $(INC)

make_libft:
	@echo "Compilation de la libft :"
	@make -C libft

clean:
	@$(RM) $(FTO)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

lldb:
	@$(LLDB) $(CFLAGS) $(FTC) -o $(NAME) $(INC) $(LIB)

.PHONY: clean fclean lldb
