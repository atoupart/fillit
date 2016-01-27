/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:13:24 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/27 17:38:54 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	t_tool	*data;

	if (!(data = (t_tool*)ft_memalloc(sizeof(t_tool))))
	{
		pts("malloc0");
		ft_error();
	}
	if (argc != 2)
	{
		ft_putstr("argument");
		ft_error();
	}
	ft_openfile_checker(argv[1], data);
	ft_resolution_tetri(data);
	printtab3(data);
	return (0);
}
