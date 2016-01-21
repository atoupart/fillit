/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:20:57 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/21 19:33:57 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 **
 * Verifie si chaque ' # ' en touche bien un autre.*
 * Si tel est le cas, c'est donc forcement bien un tetriminos.*
 **
*/

#include "fillit.h"


void		ft_checktetri(t_tool *data)
{
	pts("prout");
	ptcn;
	I = -1;
	while (++I < NBTETRI)
	{
		Y = -1;
		while (++Y < 4)
		{
			X = -1;
			while (++X < 4)
			{
				if (TABTETRI[I][Y][X] == '#')
				{
					if (!(TABTETRI[I][Y][X + 1] == '#' || \
						TABTETRI[I][Y][X - 1] == '#' || \
						TABTETRI[I][Y + 1][X] == '#' || \
						TABTETRI[I][Y - 1][X] == '#'))
					{
						ft_putstr("formtetri");
						ft_error();
					}
				}
			}
		}
	}
}
