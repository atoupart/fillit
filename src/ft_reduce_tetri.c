/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reduce_tetri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 15:28:09 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/27 17:38:25 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_reduce_tetri(t_tool *data)
{
	I = -1;
	if (!(TAB = (char***)ft_memalloc(sizeof(char**) * NBTETRI + 1)))
		ft_error();
	while (++I < NBTETRI)
	{
		if (!(TAB[I] = (char**)ft_memalloc(sizeof(char*) * Y_MAX[I] + 1)))
			ft_error();
		Y = 0;
		K = Y_MIN[I];
		while (K <= Y_MAX[I])
		{
			if (!(TAB[I][Y] = (char*)ft_memalloc(sizeof(char) * X_MAX[I] + 1)))
				ft_error();
			X = 0;
			J = X_MIN[I];
			while (J <= X_MAX[I])
			{
				TAB[I][Y][X++] = TABTETRI[I][K][J++];
			}
			Y++;
			K++;
		}
	}
}





















