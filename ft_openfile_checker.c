/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_openfile_checker.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 14:22:06 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/11 19:58:02 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#define BUF_SIZE 21

static void		ft_checker(char *buf, int ret)
{
	size_t i;
	size_t j;

	i = 0;

	if (ret != 20 && ret != 21) {
		ft_error();
	}

	while (buf[i])
	{
		if (buf[i] != '.' && buf[i] != '#' && buf[i] != '\n' && buf[i] != 'a')
		{
			ft_putstr("nature");
			ft_error();
		}
		i++;
	}

	i = 4;
	j = 0;
	while (j != 4)
	{
		if (buf[i] != '\n')
		{
			ft_putstr("forme");
			ft_error();
		}	
		i = i + 5;
		j++;
	}
	if (buf[ret] != '\0') {
		ft_error();
	}
	ft_putstr("forme OK\n");
}

void			ft_openfile_checker(char *str)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	if ((fd = open(str, O_RDONLY)) == -1)
		ft_error();
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ft_checker(buf, ret);
	}
	if (close(fd) == -1)
		ft_error();
}
