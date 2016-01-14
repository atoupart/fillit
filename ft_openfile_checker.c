/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitncheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 16:07:54 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/14 20:13:12 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_checktab(char **tab, t_tool *data)
{
	X = 0;
	Y = 0;
	while (tab[Y])
	{
		while (tab[Y][X])
		{
			if (tab[Y][X] != '.' && tab[Y][X] != '#')
				ft_error();
			X++;
		}
		Y++;
		X = 0;
	}
	if (Y % 4 != 0 || Y == 0)
		ft_error();
}

static char		**ft_splitncheck(char *str, t_tool *data)
{
	char **tab;

	tab = ft_strsplit(str, '\n');
	ft_checktab(tab, data);
	return (tab);
}

char		**ft_openfile_checker(char *str, t_tool *data)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];
	char **tab;

	if ((fd = open(str, O_RDONLY)) == -1)
		ft_error();
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	tab = ft_splitncheck(buf, data);
	print_string_tab(tab);
	if (close(fd) == -1)
		ft_error();
	return (tab);
}
