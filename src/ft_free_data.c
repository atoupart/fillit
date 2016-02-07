/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 21:05:57 by ebaudet           #+#    #+#             */
/*   Updated: 2016/02/04 17:43:17 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_free_3D_tab(char ***tab, t_tool *data)
{
	I = -1;
	while (tab && tab[++I])
	{
		Y = -1;
		while (tab[I] && tab[I][++Y])
		{
			ft_putstr("free(tab[I][Y])\n");
			free(tab[I][Y]);
		}
		if (tab[I]) {
			ft_putstr("free(tab[I])\n");
			free(tab[I]);
		}
		ft_putstr("couocu\n");
	}
	ft_putstr("free(tab)\n");
	free(tab);
}

void		ft_free_data(t_tool *data)
{
	if (data)
	{
		ft_putstr("free(TABTETRI)\n");
		ft_free_3D_tab(TABTETRI, data);
		ft_putstr("free(TAB)\n");
		ft_free_3D_tab(TAB, data);
		ft_putstr("free(data)\n");
		free(data);
	}
}
