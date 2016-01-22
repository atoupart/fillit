/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transfert_tab_tetri.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 16:52:04 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/22 15:40:38 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_transfert_tab_tetri(char **tab, t_tool *data)
{
	I = -1;
	K = -1;
	if (!(TABTETRI = (char***)ft_memalloc(sizeof(char**) * NBTETRI)))
	{
		ft_putstr("malloc1");
		ft_error();
	}
	while (++I < NBTETRI)
	{
		if (!(TABTETRI[I] = (char**)ft_memalloc(sizeof(char*) * 5)))
		{
			ft_putstr("malloc2");
			ft_error();
		}
		Y = -1;
		while (++Y < 4)
		{
			if (!(TABTETRI[I][Y] = (char*)ft_memalloc(sizeof(char) * 5)))
			{
				ft_putstr("malloc3");
				ft_error();
			}
			K++;
			X = -1;
			J = -1;
			while (++X < 4)
				TABTETRI[I][Y][X] = tab[K][++J];
		}
	}
}