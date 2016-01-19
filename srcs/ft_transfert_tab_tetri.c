/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transfert_tab_tetri.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 16:52:04 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/19 19:34:00 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_transfert_tab_tetri(char **tab, t_tool *data)
{
	I = -1;
	X = -1;
	Y = -1;
	if (!(TABTETRI = (char***)ft_memalloc(sizeof(char**) * NBTETRI)))
		ft_error();
	while (++I < NBTETRI)
	{
		if (!(TABTETRI[I] = (char**)ft_memalloc(sizeof(char*) * 5)))
			ft_error();
		while (++Y < 4)
		{
			if(!(TABTETRI[I][Y] = (char*)ft_memalloc(sizeof(char) * 5)))
				ft_error();
			while (++X < 4)
				TABTETRI[I][Y][X] = tab[Y][X];
			X = -1;
		}
		Y = -1;
	}
}
