/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:20:57 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/20 18:49:03 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_checktetri(t_tool *data)
{
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
						ft_putstr("prout");
						ft_putnbr(I);
						ft_putnbr(Y);
						ft_putnbr(X);
						ft_error();
					}
				}
			}
		}
	}
}

