/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_piece.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilien <emilien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 13:05:40 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/04 18:10:07 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		put_piece(t_tool *data, int y, int x)
{
	K = -1;
	while (TAB[I][++K] && (K + y < SQUARE))
	{
		J = -1;
		while (TAB[I][K][++J] && (J + x < SQUARE))
		{
			if (TAB[I][K][J] == '#')
				FINALTAB[y + K][x + J] = 'A' + I;
		}
	}
	return (1);
}
