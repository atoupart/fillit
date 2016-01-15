/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:28:17 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/15 12:20:52 by atoupart         ###   ########.fr       */
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

typedef struct		s_tool
{
	int				x;
	int				y;
	int				i;
}					t_tool;

void			ft_error(void);

char			**ft_openfile_checker(char *str, t_tool *data);

void			ft_checktab(char **tab, t_tool *data);

char			**ft_splitncheck(char *str, t_tool *data);

void			print_string_tab(char **tab);

#endif
