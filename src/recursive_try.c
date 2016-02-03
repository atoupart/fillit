/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_try.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 13:05:40 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/03 11:35:30 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
 * Indique les emplacement pour poser des pièces
 * retourne 1 quand la piece est posée.
 * retourne 0 quand la pièce n'est pas posable.
 */
int		recursive_try(t_tool *data)
{
	ptn(1);pts("  ################   Debut recursive  I = ");ptn(I);ptcn;
	if (I == NBTETRI)
	{
		ptn(2);pts("I == NBTETRI, return (1)");ptcn;
		return (1);
	}
	Y = -1;
	while (++Y < SQUARE)
	{
		ptn(3);pts("  ++Y  :  ");ptn(Y);ptcn;
		X = -1;
		while (++X < SQUARE)
		{
			ptn(4);pts("  ++X  :  ");ptn(X);ptcn;
			if (ft_verif_put(data) == 1)
			{
				I++;
				ptn(5);pts("  verif & put ok, I++  :  ");ptn(I);ptcn;
				if (recursive_try(data) == 0)
				{
					retire_piece(data);
					I--;
					ptn(6);pts("  recursive == 0, retire piece et I--");ptcn;
				}
				else
				{
					ptn(7);pts("  recursive != 0, return (1)");ptcn;
					return (1);
				}
			}
		}
	}
	if (I == 0)
	{
		ptn(8);pts("  I == 0, square++ free init et recursive");ptcn;
		SQUARE += 1;
		free_square(data);
		init_square(data);
		recursive_try(data);
	}
	ptn(9);pts("  I != 0, return (0)");ptcn;
	return (0);
}















