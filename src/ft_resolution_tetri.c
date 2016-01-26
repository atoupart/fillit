/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolution_tetri.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 13:03:54 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/26 14:24:38 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_resolution_tetri(t_tool *data)
{
	if (!(Y_MAX = (int*)ft_memalloc(sizeof(int) * NBTETRI))
	|| !(X_MAX = (int*)ft_memalloc(sizeof(int) * NBTETRI))
	|| !(Y_MIN = (int*)ft_memalloc(sizeof(int) * NBTETRI))
	|| !(X_MIN = (int*)ft_memalloc(sizeof(int) * NBTETRI)))
	{
		pts("mallocXY");
		ft_error();
	}
	ft_search_Y_MIN(data);
	ft_search_Y_MAX(data);
	ft_search_X_MIN(data);
	ft_search_X_MAX(data);
	I = -1;
	while (++I < NBTETRI)
	{
		pts("_____________________");
		ptcn;
		pts("Y_MIN : ");
		ptn(Y_MIN[I]);
		ptcn;
		pts("Y_MAX : ");
		ptn(Y_MAX[I]);
		ptcn;
		pts("X_MIN : ");
		ptn(X_MIN[I]);
		ptcn;
		pts("X_MAX : ");
		ptn(X_MAX[I]);
		ptcn;
	}
}
