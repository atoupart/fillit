/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:13:24 by atoupart          #+#    #+#             */
/*   Updated: 2016/03/14 19:26:20 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	t_tool	*data;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit file\n");
		return (0);
	}
	if (!(data = (t_tool*)ft_memalloc(sizeof(t_tool))))
		ft_error(data);
	ft_openfile_checker(argv[1], data);
	ft_resolution_tetri(data);
	ft_free_data(data);
	return (0);
}
