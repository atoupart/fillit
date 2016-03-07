/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 21:05:57 by ebaudet           #+#    #+#             */
/*   Updated: 2016/03/07 19:11:33 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_free_3d_tab(char ***tab, t_tool *data)
{
	I = -1;
	while (tab && tab[++I])
	{
		Y = -1;
		while (tab[I] && tab[I][++Y])
			free(tab[I][Y]);
		if (tab[I])
			free(tab[I]);
	}
	free(tab);
}

void			ft_free_data(t_tool *data)
{
	if (data)
	{
		ft_free_3d_tab(TABTETRI, data);
		ft_free_3d_tab(TAB, data);
		free(data);
	}
}
