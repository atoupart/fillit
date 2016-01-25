/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launcher_capte_tetri.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 15:34:05 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/25 18:55:59 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_launcher_capte_tetri(t_tool *data)
{
	I = -1;
	if (!(TABFORM = (int*)ft_memalloc(sizeof(int) * NBTETRI)))
	{
		pts("malloc TABFORM");
		ft_error();
	}
	while (++I < NBTETRI)
	{
		pts("boucle number : ");
		ptn(I);
		ptcn;
		if (ft_capteform_1(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_1(TABTETRI[I], data);
		if (ft_capteform_2(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_2(TABTETRI[I], data);
		if (ft_capteform_3(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_3(TABTETRI[I], data);
		if (ft_capteform_4(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_4(TABTETRI[I], data);
		if (ft_capteform_5(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_5(TABTETRI[I], data);
		if (ft_capteform_6(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_6(TABTETRI[I], data);
		if (ft_capteform_7(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_7(TABTETRI[I], data);
		if (ft_capteform_8(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_8(TABTETRI[I], data);
		if (ft_capteform_9(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_9(TABTETRI[I], data);
		if (ft_capteform_10(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_10(TABTETRI[I], data);
		if (ft_capteform_11(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_11(TABTETRI[I], data);
		if (ft_capteform_12(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_12(TABTETRI[I], data);
		if (ft_capteform_13(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_13(TABTETRI[I], data);
		if (ft_capteform_14(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_14(TABTETRI[I], data);
		if (ft_capteform_15(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_15(TABTETRI[I], data);
		if (ft_capteform_16(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_16(TABTETRI[I], data);
		if (ft_capteform_17(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_17(TABTETRI[I], data);
		if (ft_capteform_18(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_18(TABTETRI[I], data);
		if (ft_capteform_19(TABTETRI[I], data))
			TABFORM[I] = ft_capteform_19(TABTETRI[I], data);
		ptn(TABFORM[I]);
		ptcn;
		pts("boucle number : ");
		ptn(I);
		ptcn;
	}
	pts("numeros des formes :");
	ptcn;
	printtab2_int(TABFORM);
}
