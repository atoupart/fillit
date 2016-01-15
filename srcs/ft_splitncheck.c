/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitncheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/15 11:52:37 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/15 11:54:16 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_splitncheck(char *str, t_tool *data)
{
	char **tab;

	tab = ft_strsplit(str, '\n');
	ft_checktab(tab, data);
	return (tab);
}
