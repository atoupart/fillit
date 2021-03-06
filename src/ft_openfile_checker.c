/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_openfile_checker.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/15 11:55:04 by atoupart          #+#    #+#             */
/*   Updated: 2016/02/04 18:47:10 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		calcul_square(t_tool *data)
{
	I = 0;
	K = NBTETRI * 4;
	while (I * I < K)
		I++;
	SQUARE = I;
}

void			ft_openfile_checker(char *str, t_tool *data)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	**tab;

	if ((fd = open(str, O_RDONLY)) == -1)
		ft_error(data);
	if ((ret = read(fd, buf, BUF_SIZE)) == BUF_SIZE)
		ft_error(data);
	if (close(fd) == -1)
		ft_error(data);
	buf[ret] = '\0';
	if (buf[0] != '#' && buf[0] != '.')
		ft_error(data);
	X = -1;
	I = 1;
	NBTETRI = 0;
	ft_checkform(buf, ret, data);
	tab = ft_strsplit(buf, '\n');
	ft_checktab(tab, data);
	ft_transfert_tab_tetri(tab, data);
	I = -1;
	ft_checktetri(data);
	calcul_square(data);
}
