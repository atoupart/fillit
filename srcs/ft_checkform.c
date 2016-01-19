/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkform.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 12:21:10 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/19 16:53:22 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_checkform(char *buf, int ret, t_tool *data)
{
	X = 4;
	I = 0;
	NBTETRI = 0;
	if (buf[ret - 2] != '.' && buf[ret - 2] != '#')
		ft_error();
	while (buf[X])
	{
		if (buf[X] != '\n')
			ft_error();
		if (I == 3)
		{
			NBTETRI++;
			if (buf[X + 1] != '\n' && buf[X + 1] != '\0')
				ft_error();
			X++;
			I = -1;
		}
		else if (buf[X + 1] != '\0')
		{
			X += 5;
			I++;
		}
	}
	if (NBTETRI > 26 || NBTETRI <= 0)
		ft_error();
}
