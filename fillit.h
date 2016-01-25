/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:28:17 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/25 17:09:39 by atoupart         ###   ########.fr       */
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
# define TABFORM data->tabform

# define pts ft_putstr
# define ptn ft_putnbr
# define ptc ft_putchar
# define ptcn ft_putchar('\n');


typedef struct		s_tool
{
	int				*tabform;
	int				x;
	int				y;
	int				i;
	int				k;
	int				j;
	int				nbtetri;
	char			***tabtetri;
}					t_tool;

void			ft_error(void);

void			ft_openfile_checker(char *str, t_tool *data);

void			ft_checkform(char *buf, int ret, t_tool *data);

void			ft_checktab(char **tab, t_tool *data);

void			ft_transfert_tab_tetri(char **tab, t_tool *data);

void			ft_checktetri(t_tool *data);

void			ft_resolution_tetri(t_tool *data);

void			ft_launcher_capte_tetri(t_tool *data);


int				ft_capteform_1(char **tab, t_tool *data);
int				ft_capteform_2(char **tab, t_tool *data);
int				ft_capteform_3(char **tab, t_tool *data);
int				ft_capteform_4(char **tab, t_tool *data);
int				ft_capteform_5(char **tab, t_tool *data);
int				ft_capteform_6(char **tab, t_tool *data);
int				ft_capteform_7(char **tab, t_tool *data);
int				ft_capteform_8(char **tab, t_tool *data);
int				ft_capteform_9(char **tab, t_tool *data);
int				ft_capteform_10(char **tab, t_tool *data);
int				ft_capteform_11(char **tab, t_tool *data);
int				ft_capteform_12(char **tab, t_tool *data);
int				ft_capteform_13(char **tab, t_tool *data);
int				ft_capteform_14(char **tab, t_tool *data);
int				ft_capteform_15(char **tab, t_tool *data);
int				ft_capteform_16(char **tab, t_tool *data);
int				ft_capteform_17(char **tab, t_tool *data);
int				ft_capteform_18(char **tab, t_tool *data);
int				ft_capteform_19(char **tab, t_tool *data);
/*
* a supprimer quant le programme sera completement operationnel.
*/
void			printtab2(char **tab);
void			printtab3(t_tool *data);
void			printtab2_int(int *tab);

#endif
