/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpieces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 13:05:40 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/01 17:56:03 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_putpieces(t_tool *data)
{
	if (!(FINALTAB = (char**)ft_memalloc(sizeof(char) * SQUARE)))
	{
		pts("malloc Finaltab");
		ft_error();
	}
	Y = -1;
	while (++Y < SQUARE)
	{
		X = -1;
		while (++X < SQUARE)
		{
			if (ft_verif_put(data))
			{
				I++;
				ft_putpieces(data);
			}
		}
	}
}
