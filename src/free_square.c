/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 21:05:57 by ebaudet           #+#    #+#             */
/*   Updated: 2016/01/28 15:34:18 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_square(t_tool *data)
{
	int		x;

	x = -1;
	while (++x < SQUARE)
	{
		free(FINALTAB[x]);
	}
	free(FINALTAB);
}
