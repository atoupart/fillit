/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:13:24 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/08 17:30:17 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

#define BUF_SIZE 21

int		main(int argc, char **argv)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	if ((fd = open(argv[1], O_RDONLY)) == -1)
	{

	return (0);
}
