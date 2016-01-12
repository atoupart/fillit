/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitncheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 16:07:54 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/12 20:48:56 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_checktab(char **tab)
{
	int y;
	int x;

	x = 0;
	y = 0;
	while (tab[y])
	{
		while (tab[y][x])
		{
			if (tab[y][x] != '.' && tab[y][x] != '#')
				ft_error();
			x++;
		}
		y++;
		x = 0;
	}
	if (y % 4 != 0 || y == 0)
		ft_error();
}

static char		**ft_splitncheck(char *str)
{
	char **tab;

	tab = ft_strsplit(str, '\n');
	ft_checktab(tab);
	return (tab);
}

char		**ft_openfile_checker(char *str)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];
	char **tab;

	if ((fd = open(str, O_RDONLY)) == -1)
		ft_error();
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	tab = ft_splitncheck(buf);
	if (close(fd) == -1)
		ft_error();
	return (tab);
}
