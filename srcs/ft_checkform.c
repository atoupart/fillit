/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkform.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 12:21:10 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/19 16:53:22 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void		ft_checkform(char *buf, int ret, t_tool *data)
{
	X = 4;
	I = 0;
	NBTETRI = 0;
	if (!(buf[ret - 2] == '.' || buf[ret - 2] == '#') || buf[ret - 1] != '\n')
		ft_error();
	X = -1;
	while (buf[++X])
	{
		ft_putchar(buf[X]);
		// ft_putnbr(NBTETRI + X);
		// ft_putchar('\n');
		if (((X + 1 - NBTETRI) % 5) == 0 && buf[X] == '\n') {
			I++;
		}

		if ((X - NBTETRI) != 0 && ((X - NBTETRI) % 20) == 0) {
			NBTETRI++;
			printf("\nnouveau tetri : X(%d) buf[X](%c) I(%d) NBTETRI(%d)\n", X, buf[X], I, NBTETRI);
			continue ;
		}

		if (((X + 1 - NBTETRI) % 5) && buf[X] != '.' && buf[X] != '#') {
			printf("\nerreur2 : X(%d) buf[X](%c) I(%d) NBTETRI(%d)\n", X, buf[X], I, NBTETRI);
			ft_error();
		}

		if (X != 0 && ((X + 1 - NBTETRI) % 5) == 0 && buf[X] != '\n') {
			printf("\nerreur1 : X(%d) buf[X](%c) I(%d) NBTETRI(%d)\n", X, buf[X], I, NBTETRI);
			ft_error();	
		}

		
		// if (I != 0 && I % 5 == 0) {
		// 	ft_putstr("\nNBTETRI ++\n");
		// 	NBTETRI++;
		// }

	}
	ft_putnbr(NBTETRI);
	// while (buf[X])
	// {
	// 	if (buf[X] != '\n')
	// 		ft_error();
	// 	if (I == 3)
	// 	{
	// 		NBTETRI++;
	// 		if (buf[X + 1] != '\n' && buf[X + 1] != '\0')
	// 			ft_error();
	// 		X++;
	// 		I = -1;
	// 	}
	// 	else if (buf[X + 1] != '\0')
	// 	{
	// 		X += 5;
	// 		I++;
	// 	}
	// }
	if (NBTETRI > 26 || NBTETRI <= 0)
		ft_error();
}
