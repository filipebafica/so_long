/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:36:10 by fbafica           #+#    #+#             */
/*   Updated: 2021/08/20 15:40:40 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	get_y(char *map)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (map[i] != '\0')
	{
		if (map[i] == '\n')
			++j;
		++i;
	}
	return ((j * 16));
}

int	get_x(char *map)
{
	int	i;

	i = 0;
	while (map[i] != '\n')
	{
		++i;
	}
	return ((i * 16));
}

void	*init_win(t_vars vars)
{
	int	x;
	int	y;

	x = get_x(vars.map);
	y = get_y(vars.map);
	return (mlx_new_window(vars.mlx, x, y, "./so_long"));
}
