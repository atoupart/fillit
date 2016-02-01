/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_X_MAX.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 12:38:07 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/26 15:07:11 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_search_X_MAX(t_tool *data)
{
	I = -1;
	while (++I < NBTETRI)
	{
		X = 4;
		while (--X > -1)
		{
			Y = 4;
			while (--Y > -1)
			{
				if (TABTETRI[I][Y][X] == '#')
				{
					X_MAX[I] = X;
					Y = 5;
					break;
				}
			}
			if (Y == 5)
				break;
		}
	}
}