/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_put.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 13:07:25 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/29 18:49:09 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_verif_put(t_tool *data)
{
	if (!(FINALTAB = (char**)ft_memalloc(sizeof(char) * SQUARE)))
	{
		pts("malloc Finaltab");
		ft_error();
	}
	if (FINALTAB[Y][X] == '#')
		return (0);
	return (0);
}
