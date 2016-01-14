/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 21:05:57 by ebaudet           #+#    #+#             */
/*   Updated: 2016/05/31 21:10:39 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_string_tab(char **tab)
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
