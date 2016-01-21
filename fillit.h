/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:28:17 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/21 18:50:28 by atoupart         ###   ########.fr       */
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
# define L data->l
# define NBTETRI data->nbtetri
# define TABTETRI data->tabtetri

# define pts ft_putstr
# define ptn ft_putnbr
# define ptc ft_putchar
# define ptcn ft_putchar('\n');


typedef struct		s_tool
{
	int				x;
	int				y;
	int				i;
	int				l;
	int				nbtetri;
	char			***tabtetri;
}					t_tool;

void			ft_error(void);

void			ft_openfile_checker(char *str, t_tool *data);

void			ft_checkform(char *buf, int ret, t_tool *data);

void			ft_checktab(char **tab, t_tool *data);

void			ft_transfert_tab_tetri(char **tab, t_tool *data);

void			ft_checktetri(t_tool *data);

void			print_string_tab(char **tab);

void			printtab(t_tool *data);

#endif
