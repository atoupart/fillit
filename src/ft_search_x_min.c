/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_x_min.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 12:31:22 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/04 18:34:51 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_search_x_min(t_tool *data)
{
	I = -1;
	while (++I < NBTETRI)
	{
		X = -1;
		while (++X < 4)
		{
			Y = -1;
			while (++Y < 4)
			{
				if (TABTETRI[I][Y][X] == '#')
				{
					X_MIN[I] = X;
					Y = 5;
					break ;
				}
			}
			if (Y == 5)
				break ;
		}
	}
}
