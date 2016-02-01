/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_try.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 13:05:40 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/01 17:56:03 by atoupart         ###   ########.fr       */
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
	if (I == NBTETRI)
		return (1);
	Y = -1;
	while (++Y < SQUARE)
	{
		X = -1;
		while (++X < SQUARE)
		{
			if (ft_verif_put(data) == 1)
			{
				I++;
				if (recursive_try(data) == 0)
				{
					retire_piece(data);
					I--;
				}
				else
					return (1);
			}
		}
	}
	if (I == 0) {
		SQUARE += 1;
		free_square(data);
		init_square(data);
		recursive_try(data);
	}
	return (0);
}
