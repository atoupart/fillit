/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retire_piece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 21:05:57 by ebaudet           #+#    #+#             */
/*   Updated: 2016/02/02 16:52:53 by atoupart         ###   ########.fr       */
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
