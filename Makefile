# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atoupart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 10:08:38 by atoupart          #+#    #+#              #
#    Updated: 2016/01/25 17:11:21 by atoupart         ###   ########.fr        #
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
		ft_launcher_capte_tetri.c\
		ft_capteform_1.c\
		ft_capteform_2.c\
		ft_capteform_3.c\
		ft_capteform_4.c\
		ft_capteform_5.c\
		ft_capteform_6.c\
		ft_capteform_7.c\
		ft_capteform_8.c\
		ft_capteform_9.c\
		ft_capteform_10.c\
		ft_capteform_11.c\
		ft_capteform_12.c\
		ft_capteform_13.c\
		ft_capteform_14.c\
		ft_capteform_15.c\
		ft_capteform_16.c\
		ft_capteform_17.c\
		ft_capteform_18.c\
		ft_capteform_19.c\
		printtab2.c\
		printtab3.c\
		printtab2_int.c
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
