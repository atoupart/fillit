/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 21:05:57 by ebaudet           #+#    #+#             */
/*   Updated: 2016/02/03 16:53:13 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	init_square(t_tool *data)
{
	int x;

	I = 0;
	if (!(FINALTAB = (char**)ft_memalloc(sizeof(char*) * (SQUARE + 1))))
		ft_error();
	x = -1;
	while (++x < SQUARE)
	{
		if (!(FINALTAB[x] = (char*)ft_memalloc(sizeof(char) * (SQUARE + 1))))
			ft_error();
	}
}
