/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printtab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 17:55:55 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/19 20:18:21 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		printtab(t_tool *data)
{
	I = -1;
	X = -1;
	Y = -1;
	while (++I < NBTETRI)
	{
		Y = -1;
		while (++Y < 4)
		{
			X = -1;
			while (++X < 4)
				ft_putchar(TABTETRI[I][Y][X]);
			ft_putchar('\n');
		}
		ft_putchar('\n');
	}
}
