/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_put.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilien <emilien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 13:07:25 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/04 17:51:59 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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
