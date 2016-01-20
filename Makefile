# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atoupart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 10:08:38 by atoupart          #+#    #+#              #
#    Updated: 2016/01/20 17:54:33 by atoupart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fillit

CC		= gcc
RM		= /bin/rm -rf

CFLAGS	= -Wall -Wextra -Werror

FILES	= main.c\
		ft_error.c\
		ft_openfile_checker.c\
		ft_checkform.c\
		ft_checktab.c\
		ft_transfert_tab_tetri.c\
		ft_checktetri.c\
		print_string_tab.c\
		printtab.c
SRC		= $(addprefix srcs/, $(FILES))
OBJ		= $(SRC:srcs/%.c=.obj/%.o)

INC		= -I . -I libft
LIB		= -L libft -lft

all: $(NAME)

$(NAME): make_libft $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(INC) $(LIB)

.obj/%.o: srcs/%.c
	@mkdir -p .obj
	@$(CC) -c $< -o $@ $(CFLAGS) $(INC)

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
