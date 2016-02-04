/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retire_piece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilien <emilien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 21:05:57 by ebaudet           #+#    #+#             */
/*   Updated: 2016/02/04 02:24:36 by emilien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	retire_piece(t_tool *data)
{
	K = -1;
	while (++K < SQUARE)
	{
		J = -1;
		while (++J < SQUARE)
		{
			if (FINALTAB[K][J] == ('A' + I))
				FINALTAB[K][J] = '\0';
		}
	}
}
