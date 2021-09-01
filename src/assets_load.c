/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assets_load.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:52:36 by fbafica           #+#    #+#             */
/*   Updated: 2021/08/29 12:34:20 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	load_assets(t_vars *vars)
{
	t_assets	collect;
	t_assets	empty;
	t_assets	exit;
	t_assets	player;
	t_assets	wall;

	collect.img = mlx_xpm_file_to_image(vars->mlx, COLLECT_PATH, \
	&collect.width, &collect.height);
	empty.img = mlx_xpm_file_to_image(vars->mlx, EMPTY_PATH, \
	&empty.width, &empty.height);
	exit.img = mlx_xpm_file_to_image(vars->mlx, EXIT_PATH, \
	&exit.width, &exit.height);
	player.img = mlx_xpm_file_to_image(vars->mlx, PLAYER_PATH, \
	&player.width, &player.height);
	wall.img = mlx_xpm_file_to_image(vars->mlx, WALL_PATH, \
	&wall.width, &wall.height);
	vars->collect = collect;
	vars->empty = empty;
	vars->exit = exit;
	vars->player = player;
	vars->wall = wall;
}
