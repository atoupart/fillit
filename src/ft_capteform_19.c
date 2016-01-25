/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capteform_19.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 15:38:32 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/25 18:36:17 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_capteform_19(char **tab, t_tool *data)
{
	Y = -1;
	while (++Y < 4)
	{
		X = -1;
		while (++X < 4)
			if (tab[Y][X] == '#')
				if (tab[Y][X + 1] == '#')
					if (tab[Y][X + 2] == '#')
						if (tab[Y + 1][X + 2] == '#')
							return (19);
	}
	return (0);
}
