/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 16:07:54 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/04 17:45:30 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_checktab(char **tab, t_tool *data)
{
	Y = -1;
	I = 0;
	while (tab[++Y])
	{
		X = -1;
		while (tab[Y][++X])
			if (tab[Y][X] == '#')
				I++;
		if ((Y + 1) % 4 == 0)
		{
			if (I != 4)
				ft_error(data);
			else
				I = 0;
		}
	}
	if (Y % 4 != 0 || Y == 0)
		ft_error(data);
}
