/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktetri2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 12:53:43 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/22 16:03:52 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_checktetri(t_tool *data)
{
	I = -1;
	while (++I < NBTETRI)
	{
		Y = -1;
		K = 0;
		while (++Y < 4)
		{
			X = -1;
			while (++X < 4)
			{
				if (TABTETRI[I][Y][X] == '#')
				{
					if (TABTETRI[I][Y][X + 1] == '#' && TABTETRI[I][Y][X + 1])
						K++;
					if (TABTETRI[I][Y][X - 1] == '#' && TABTETRI[I][Y][X - 1])
						K++;
					if ((Y < 3) && TABTETRI[I][Y + 1][X] == '#')
						K++;
					if ((Y > 0) && TABTETRI[I][Y - 1][X] == '#')
						K++;
				}
			}
		}
	}
		if (K < 6)
		{
			pts("formtetri");
			ft_error();
		}
}
