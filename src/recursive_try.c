/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_try.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilien <emilien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 13:05:40 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/04 02:34:42 by emilien          ###   ########.fr       */
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
	int x;
	int y;
	// ptn(1);pts("  ################   Debut recursive  I = ");ptn(I);ptcn;
	if (I == NBTETRI)
	{
		// ptn(2);pts("I == NBTETRI, return (1)");ptcn;
		return (1);
	}
	y = -1;
	while (++y < SQUARE)
	{
		// ptn(3);pts("  ++y  :  ");ptn(y);ptcn;
		x = -1;
		while (++x < SQUARE)
		{
			// ptn(4);pts("  ++x  :  ");ptn(x);ptcn;
			if (ft_verif_put(data, y, x) == 1)
			{
				I++;
				// ptn(5);pts("  verif & put ok, I++  :  ");ptn(I);ptcn;
				if (recursive_try(data) == 1)
				{
					// ptn(7);pts("  recursive == 1, return (1)");ptcn;
					return (1);
				}
			}
		}
	}
	I--;
	// print_solution(data);
	// ptn(11);pts("  on retire la piece [");ptn(I);pts("]");ptcn;

	retire_piece(data);
	// print_solution(data);
	
	if (I == -1)
	{
		// ptn(8);pts("  I == -1, square++ free init et recursive");ptcn;
		SQUARE += 1;
		free_square(data);
		init_square(data);
		I = 0;
		recursive_try(data);

	}
	// ptn(9);pts("  I = ");ptn(I);pts("on contitinue sur le parent");ptcn;
	return (0);
}















