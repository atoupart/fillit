/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transfert_tab_tetri.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 16:52:04 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/04 18:05:29 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_transfert_tab_tetri(char **tab, t_tool *data)
{
	I = -1;
	K = -1;
	if (!(TABTETRI = (char***)ft_memalloc(sizeof(char**) * NBTETRI + 1)))
		ft_error(data);
	while (++I < NBTETRI)
	{
		if (!(TABTETRI[I] = (char**)ft_memalloc(sizeof(char*) * 5)))
			ft_error(data);
		Y = -1;
		while (++Y < 4)
		{
			if (!(TABTETRI[I][Y] = (char*)ft_memalloc(sizeof(char) * 5)))
				ft_error(data);
			K++;
			X = -1;
			J = -1;
			while (++X < 4)
				TABTETRI[I][Y][X] = tab[K][++J];
		}
	}
}
