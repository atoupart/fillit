/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_openfile_checker.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/15 11:55:04 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/18 13:35:44 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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
	ft_checkform(buf, data);
	tab = ft_strsplit(buf, '\n');
	ft_checktab(tab, data);
	if (close(fd) == -1)
		ft_error();
	return (tab);
}
