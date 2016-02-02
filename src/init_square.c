/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 21:05:57 by ebaudet           #+#    #+#             */
/*   Updated: 2016/02/02 15:25:10 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	init_square(t_tool *data)
{
	I = 0;
	if (!(FINALTAB = (char**)ft_memalloc(sizeof(char*) * (SQUARE + 1))))
		ft_error();
	X = -1;
	while (++X < SQUARE)
	{
		if (!(FINALTAB[X] = (char*)ft_memalloc(sizeof(char) * (SQUARE + 1))))
			ft_error();
	}
}
