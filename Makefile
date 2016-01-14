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
RM		= /bin/rm -rf

CFLAGS	= -Wall -Wextra -Werror

FILES	= main.c\
		ft_error.c\
		ft_openfile_checker.c\
		print_string_tab.c
SRC		= $(addprefix srcs/, $(FILES))
OBJ		= $(SRC:srcs/%.c=.obj/%.o)

INC		= -I . -I libft
LIB		= -L libft -lft

all: $(NAME)

$(NAME): make_libft $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(INC) $(LIB)

.obj/%.o: srcs/%.c
	@mkdir -p .obj
	$(CC) -c $< -o $@ $(FLAGS) $(INC)

make_libft:
	@echo "Compilation de la libft :"
	@make -C libft

clean:
	@$(RM) .obj

fclean: clean
	@$(RM) $(NAME)

re: fclean all

lldb:
	cc $(CFLAGS) $(SRC) -o $(NAME) $(INC) $(LIB)

.PHONY: all clean fclean re lldb
