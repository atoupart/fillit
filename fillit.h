/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:28:17 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/26 16:45:49 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>
# include "libft/libft.h"

# define BUF_SIZE 545
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

# define pts ft_putstr
# define ptn ft_putnbr
# define ptc ft_putchar
# define ptcn ft_putchar('\n');


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
}					t_tool;

void			ft_error(void);

void			ft_openfile_checker(char *str, t_tool *data);

void			ft_checkform(char *buf, int ret, t_tool *data);

void			ft_checktab(char **tab, t_tool *data);

void			ft_transfert_tab_tetri(char **tab, t_tool *data);

void			ft_checktetri(t_tool *data);

void			ft_resolution_tetri(t_tool *data);

void			ft_search_Y_MIN(t_tool *data);

void			ft_search_Y_MAX(t_tool *data);

void			ft_search_X_MIN(t_tool *data);

void			ft_search_X_MAX(t_tool *data);

void			ft_reduce_tetri(t_tool *data);

/*
* a supprimer quant le programme sera completement operationnel.
*/
void			printtab2(char **tab);
void			printtab3(t_tool *data);

#endif
