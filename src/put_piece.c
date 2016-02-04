/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_piece.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 13:05:40 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/03 10:58:46 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
 * Pose la piece
 * retourne 1
 */
int		put_piece(t_tool *data, int y, int x)
{
	K = -1;
	while (TAB[I][++K])
	{
		J = -1;
		while (TAB[I][K][++J])// && (K + Y < SQUARE) && (J + X < SQUARE))
		{
			if (TAB[I][K][J] == '#')
				FINALTAB[y + K][x + J] = 'A' + I;
		}
	}

	return (1);
}
