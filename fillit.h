/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilien <emilien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:28:17 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/04 18:00:22 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>
# include "libft/libft.h"

# define BUF_SIZE 546
# define X data->x
# define Y data->y
# define I data->i
# define K data->k
# define J data->j
# define NBTETRI data->nbtetri
# define TABTETRI data->tabtetri
# define X_MAX data->x_max
# define Y_MAX data->y_max
# define X_MIN data->x_min
# define Y_MIN data->y_min
# define TAB data->tab
# define FINALTAB data->finaltab
# define SQUARE data->square

typedef struct		s_tool
{
	int				*x_max;
	int				*y_max;
	int				*x_min;
	int				*y_min;
	int				x;
	int				y;
	int				i;
	int				k;
	int				j;
	int				nbtetri;
	char			***tabtetri;
	char			***tab;
	char			**finaltab;
	int				square;
}					t_tool;

void				ft_error(t_tool *data);
void				ft_openfile_checker(char *str, t_tool *data);
void				ft_checkform(char *buf, int ret, t_tool *data);
void				ft_checktab(char **tab, t_tool *data);
void				ft_transfert_tab_tetri(char **tab, t_tool *data);
void				ft_checktetri(t_tool *data);
void				ft_resolution_tetri(t_tool *data);
void				ft_search_y_max(t_tool *data);
void				ft_search_y_min(t_tool *data);
void				ft_search_x_min(t_tool *data);
void				ft_search_x_max(t_tool *data);
void				ft_reduce_tetri(t_tool *data);
int					recursive_try(t_tool *data);
int					ft_verif_put(t_tool *data, int y, int x);
int					put_piece(t_tool *data, int y, int x);
void				print_solution(t_tool *data);
void				retire_piece(t_tool *data);
void				init_square(t_tool *data);
void				free_square(t_tool *data);
void				ft_free_data(t_tool *data);

#endif
