/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilien <emilien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 21:05:57 by ebaudet           #+#    #+#             */
/*   Updated: 2016/02/04 02:22:35 by emilien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_solution(t_tool *data)
{
	Y = -1;
	while (++Y < SQUARE)
	{
		X = -1;
		while (++X < SQUARE)
		{
			if (FINALTAB[Y][X] == '\0')
				ft_putchar(' ');
			else
				ft_putchar(FINALTAB[Y][X]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
