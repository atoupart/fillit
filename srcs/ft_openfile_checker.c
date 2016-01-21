/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_openfile_checker.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/15 11:55:04 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/21 19:33:08 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_openfile_checker(char *str, t_tool *data)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	**tab;

	if ((fd = open(str, O_RDONLY)) == -1)
	{
		ft_putstr("open");
		ft_error();
	}
	if ((ret = read(fd, buf, BUF_SIZE)) == BUF_SIZE)
	{
		ft_putstr("read");
		ft_error();
	}
	if (close(fd) == -1)
	{
		ft_putstr("close");
		ft_error();
	}
	buf[ret] = '\0';
	ft_checkform(buf, ret, data);
	tab = ft_strsplit(buf, '\n');
	ft_transfert_tab_tetri(tab, data);
	ft_checktetri(data);
}
