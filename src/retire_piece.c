/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retire_piece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 21:05:57 by ebaudet           #+#    #+#             */
/*   Updated: 2016/01/28 15:34:18 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	retire_piece(t_tool *data)
{
	K = -1;
	while (TAB[I][++K])
	{
		J = -1;
		while (TAB[I][K][++J] && (K + Y < SQUARE)  && (J + X < SQUARE))
		{
			if (TAB[I][K][J] == '#')
				FINALTAB[Y + K][X + J] = '\0';
		}
	}
}
