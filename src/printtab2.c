/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 21:05:57 by ebaudet           #+#    #+#             */
/*   Updated: 2016/01/22 15:00:41 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	printtab2(char **tab)
{
	int		x;
	int		y;

	x = -1;
	while (tab[++x] != NULL)
	{
		y = -1;
		while (tab[x][++y] != '\0')
		{
			ft_putchar(tab[x][y]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}