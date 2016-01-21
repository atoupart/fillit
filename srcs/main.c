/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:13:24 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/21 19:11:50 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	t_tool	*data;

	data = (t_tool*)malloc(sizeof(t_tool));
	if (argc == 2)
	{
		ft_openfile_checker(argv[1], data);
//		printtab(data);
	}
	else
	{
		ft_putstr("argument");
		ft_error();
	}
	return (0);
}
