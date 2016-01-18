/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkform.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 12:21:10 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/18 14:16:32 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_checkform(char *buf, t_tool *data)
{
	X = 4;
	Y = 20;
	I = 0;
	while (buf[X])
	{
		if (buf[X] != '\n')
			ft_error();
		if (I == 3)
		{
			X++;
			I = -1;
		}
		else if (buf[X + 1] != '\0')
		{
			X += 5;
			I++;
		}
	}
	while (buf[Y])
	{
		if (buf[Y] != '\n')
			ft_error();
		if (buf[Y + 20] != '\0')
			Y += 21;
	}
}
