/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkform.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 12:21:10 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/20 16:34:39 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/* ************************************************************************** *
 * Check le fichier :
 * - type de charactère correcte
 * - il s'agit bien d'emplacements pour pieces de 4 x 4
 * - initialise NBTETRI au nombre de tetrinimos
 * ************************************************************************** */
void		ft_checkform(char *buf, int ret, t_tool *data)
{
	X = -1;
	I = 1;
	NBTETRI = 0;
	if (!(buf[ret - 2] == '.' || buf[ret - 2] == '#') || buf[ret - 1] != '\n')
		ft_error();
	while (buf[++X])
	{
		if (X == 0 && (buf[X] == '#' || buf[X] == '.'))
			continue ;
		else if (((X - NBTETRI) % 20) == 0)
		{
			if (buf[X] != '\n' && I == 1)
				ft_error();
			if (I == 1)
				NBTETRI++;
			I = -I;
		}
		else if ((X + 1 - NBTETRI) % 5 == 0)
		{
			if (buf[X] != '\n')
				ft_error();
		}
		else if (buf[X] != '#' && buf[X] != '.')
			ft_error();
	}
	NBTETRI++;
	if (NBTETRI > 26 || NBTETRI <= 0)
		ft_error();
}
