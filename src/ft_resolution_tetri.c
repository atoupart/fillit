/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolution_tetri.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 13:03:54 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/04 18:00:45 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_resolution_tetri(t_tool *data)
{
	if (!(Y_MAX = (int*)ft_memalloc(sizeof(int) * NBTETRI))
	|| !(X_MAX = (int*)ft_memalloc(sizeof(int) * NBTETRI))
	|| !(Y_MIN = (int*)ft_memalloc(sizeof(int) * NBTETRI))
	|| !(X_MIN = (int*)ft_memalloc(sizeof(int) * NBTETRI)))
		ft_error(data);
	ft_search_y_min(data);
	ft_search_y_max(data);
	ft_search_x_min(data);
	ft_search_x_max(data);
	ft_reduce_tetri(data);
	init_square(data);
	recursive_try(data);
	print_solution(data);
}
