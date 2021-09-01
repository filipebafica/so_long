/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 14:57:47 by fbafica           #+#    #+#             */
/*   Updated: 2021/08/22 20:08:05 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	put_nonstatic_to_img(t_vars vars)
{
	int	x;
	int	y;
	int	i;

	x = 0;
	y = 0;
	i = 0;
	while ((vars.map)[i] != '\0')
	{
		if ((vars.map)[i] == '\n')
		{
			x = 0;
			y += 16;
			++i;
		}
		if ((vars.map)[i] == 'C')
			mlx_put_image_to_window(vars.mlx, vars.win, vars.collect.img, x, y);
		if ((vars.map)[i] == 'P')
			mlx_put_image_to_window(vars.mlx, vars.win, vars.player.img, x, y);
		x += 16;
		++i;
	}
}

void	put_static_to_img(t_vars vars)
{
	int	x;
	int	y;
	int	i;

	x = 0;
	y = 0;
	i = 0;
	while ((vars.map)[i] != '\0')
	{
		if ((vars.map)[i] == '\n')
		{
			x = 0;
			y += 16;
			++i;
		}
		if ((vars.map)[i] == '1')
			mlx_put_image_to_window(vars.mlx, vars.win, vars.wall.img, x, y);
		else if ((vars.map)[i] == 'E')
			mlx_put_image_to_window(vars.mlx, vars.win, vars.exit.img, x, y);
		else
			mlx_put_image_to_window(vars.mlx, vars.win, vars.empty.img, x, y);
		x += 16;
		++i;
	}
}

void	init_map(t_vars vars)
{
	put_static_to_img(vars);
	put_nonstatic_to_img(vars);
}
