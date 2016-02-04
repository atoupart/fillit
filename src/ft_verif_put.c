/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_put.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 13:07:25 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/03 16:55:28 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
 * Essaye de poser une pièce à l'emplacement.
 * Si c'est ok,    retourne 1.
 * Si ne peut pas, retourne 0
 */
int			ft_verif_put(t_tool *data, int y, int x)
{
	int		nb_diese;

	nb_diese = 0;
	K = -1;
	while (TAB[I][++K] && (K + y < SQUARE))
	{
		J = -1;
		while (TAB[I][K][++J] && (J + x < SQUARE))
		{
			if (TAB[I][K][J] == '#')
			{
				nb_diese++;
				if (FINALTAB[y + K][x + J] != '\0')
					return (0);
			}
		}
	}
	if (nb_diese != 4 && (((K + y) >= SQUARE) || ((J + x) >= SQUARE)))
		return (0);
	return (put_piece(data, y, x));
}
