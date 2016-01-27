/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolution_tetri.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 13:03:54 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/27 16:57:07 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_resolution_tetri(t_tool *data)
{
	if (!(Y_MAX = (int*)ft_memalloc(sizeof(int) * NBTETRI + 1))
	|| !(X_MAX = (int*)ft_memalloc(sizeof(int) * NBTETRI + 1))
	|| !(Y_MIN = (int*)ft_memalloc(sizeof(int) * NBTETRI + 1))
	|| !(X_MIN = (int*)ft_memalloc(sizeof(int) * NBTETRI + 1)))
	{
		pts("mallocXY");
		ft_error();
	}
	ft_search_Y_MIN(data);
	ft_search_Y_MAX(data);
	ft_search_X_MIN(data);
	ft_search_X_MAX(data);
	pts("Y_MIN : ");
	ptn(Y_MIN[0]);
	ptcn;
	pts("X_MIN : ");
	ptn(X_MIN[0]);
	ptcn;
	pts("Y_MAX : ");
	ptn(Y_MAX[0]);
	ptcn;
	pts("X_MAX : ");
	ptn(X_MAX[0]);
	ptcn;
	ft_reduce_tetri(data);
}
