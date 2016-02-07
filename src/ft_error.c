/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 16:15:43 by atoupart          #+#    #+#             */
/*   Updated: 2016/01/20 18:06:59 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_error(t_tool *data)
{
	ft_free_data(data);
	ft_putstr("error");
	ft_putchar('\n');
	exit(EXIT_FAILURE);
}
