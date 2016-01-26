/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reduce_tetri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 15:28:09 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/26 17:11:29 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_reduce_tetri(t_tool *data)
{
	I = -1;
	if (!(TAB = (char***)ft_memalloc(sizeof(char**) * NBTETRI)))
		ft_error();
	while (++I < NBTETRI)
	{
		if (!(TAB[I] = (char**)ft_memalloc(sizeof(char*) * Y_MAX[I])))
			ft_error();
		Y = -1;
		pts("tour de I : ");
		ptn(I);
		ptcn;
		pts("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
		ptcn;
		while (++Y <= Y_MAX[I])
		{
			if (!(TAB[I][Y] = (char*)ft_memalloc(sizeof(char) * X_MAX[I])))
				ft_error();
			X = -1;
			pts("tour de Y : ");
			ptn(Y);
			ptcn;
			pts("-------------------------------------");
			ptcn;
			while (++X <= X_MAX[I])
			{
				pts("tour de X : ");
				ptn(X);
				ptcn;
				pts("***********");
				ptcn;
				TAB[I][Y][X] = TABTETRI[I][Y_MIN[I] + Y][X_MIN[I] + X];
			}
			}
	}
}
