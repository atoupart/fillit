/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_try.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilien <emilien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 13:05:40 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/04 18:52:55 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		recursive_next(t_tool *data)
{
	if (I == -1)
	{
		SQUARE += 1;
		free_square(data);
		init_square(data);
		I = 0;
		recursive_try(data);
	}
}

int				recursive_try(t_tool *data)
{
	int x;
	int y;

	if (I == NBTETRI)
		return (1);
	y = -1;
	while (++y < SQUARE)
	{
		x = -1;
		while (++x < SQUARE)
		{
			if (ft_verif_put(data, y, x) == 1)
			{
				I++;
				if (recursive_try(data) == 1)
				{
					return (1);
				}
			}
		}
	}
	I--;
	retire_piece(data);
	recursive_next(data);
	return (0);
}
