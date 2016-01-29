# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atoupart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 10:08:38 by atoupart          #+#    #+#              #
#    Updated: 2016/01/29 13:38:45 by atoupart         ###   ########.fr        #
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
		ft_resolution_tetri.c\
		ft_search_Y_MIN.c\
		ft_search_Y_MAX.c\
		ft_search_X_MIN.c\
		ft_search_X_MAX.c\
		ft_reduce_tetri.c\
		ft_putpieces.c\
		ft_verif_put.c\
		printtab2.c\
		printtab3.c
SRC		= $(addprefix src/, $(FILES))
OBJ		= $(SRC:src/%.c=.obj/%.o)

INC		= -I . -I libft
LIB		= -L libft -lft

all: $(NAME)

$(NAME): make_libft $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(INC) $(LIB)

.obj/%.o: src/%.c
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
	@cc $(CFLAGS) $(SRC) -o $(NAME) $(INC) $(LIB)

.PHONY: all clean fclean re lldb
