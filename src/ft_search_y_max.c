/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_y_max.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 12:34:48 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/04 18:35:01 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_search_y_max(t_tool *data)
{
	I = -1;
	while (++I < NBTETRI)
	{
		Y = 4;
		while (--Y > -1)
		{
			X = 4;
			while (--X > -1)
			{
				if (TABTETRI[I][Y][X] == '#')
				{
					Y_MAX[I] = Y;
					Y = 5;
					break ;
				}
			}
			if (Y == 5)
				break ;
		}
	}
}
