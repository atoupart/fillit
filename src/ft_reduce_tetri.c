/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reduce_tetri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 15:28:09 by atoupart          #+#    #+#             */
/*   Updated: 2016/03/14 19:52:00 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_reduce_tetri(t_tool *data)
{
	I = -1;
	if (!(TAB = (char***)ft_memalloc(sizeof(char**) * NBTETRI + 1)))
		ft_error(data);
	while (++I < NBTETRI)
	{
		if (!(TAB[I] = (char**)ft_memalloc(sizeof(char*) *
						(Y_MAX[I] - Y_MIN[I] + 2))))
			ft_error(data);
		Y = 0;
		K = Y_MIN[I];
		while (K <= Y_MAX[I])
		{
			if (!(TAB[I][Y] = (char*)ft_memalloc(sizeof(char) *
							(X_MAX[I] - X_MIN[I] + 2))))
				ft_error(data);
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
