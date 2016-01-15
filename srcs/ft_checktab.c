/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 16:07:54 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/15 12:16:48 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_checktab(char **tab, t_tool *data)
{
	X = 0;
	Y = 0;
	I = 0;
	while (tab[Y])
	{
		while (tab[Y][X])
		{
			if (tab[Y][X] != '.' && tab[Y][X] != '#')
				ft_error();
			if (tab[Y][X] == '#')
				I++;
			X++;
		}
		Y++;
			if (Y % 4 == 0 && Y != 0)
			{
				if (I != 4)
					ft_error();
				else
					I = 0;
			}
		X = 0;
	}
	if (Y % 4 != 0 || Y == 0)
		ft_error();
}
