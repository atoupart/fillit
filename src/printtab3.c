/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printtab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 17:55:55 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/28 14:45:07 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		printtab3(t_tool *data)
{
	pts("Visualisation de TABTETRI");
	ptcn;
	I = -1;
	while (++I < NBTETRI)
	{
		printtab2(TABTETRI[I]);
		ptcn;
	}
	pts("Visualisation de TAB");
	ptcn;
	I = -1;
	while (++I < NBTETRI)
	{
		printtab2(TAB[I]);
		ptcn;
	}
}
