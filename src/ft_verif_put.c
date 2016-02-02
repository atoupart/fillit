/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_put.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 13:07:25 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/02 15:39:14 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
 * Essaye de poser une pièce à l'emplacement.
 * Si c'est ok,    retourne 1.
 * Si ne peut pas, retourne 0
 */
int			ft_verif_put(t_tool *data)
{
	int		nb_diese;

	nb_diese = 0;
	K = -1;
	while (TAB[I][++K] && (K + Y < SQUARE))
	{
		J = -1;
		while (TAB[I][K][++J] && (J + X < SQUARE))
		{
			if (TAB[I][K][J] == '#')
			{
				nb_diese++;
				if (FINALTAB[Y + K][X + J] != '\0')
					return (0);
			}
		}
	}
	if (nb_diese != 4 && (((K + Y) >= SQUARE) || ((J + X) >= SQUARE)))
		return (0);
	return (put_piece(data));
}
