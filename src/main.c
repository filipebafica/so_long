/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:39:35 by fbafica           #+#    #+#             */
/*   Updated: 2021/08/26 14:46:50 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	main(int argc, char *argv[])
{
	t_vars	vars;

	if (argc == 2)
	{
		if (map_check(argv[1], &vars.map) == -1)
		{
			free (vars.map);
			return (-1);
		}
		vars.mlx = mlx_init();
		vars.win = init_win(vars);
		load_assets(&vars);
		init_map(vars);
		mlx_hook(vars.win, 2, 1L << 0, keyboard_hook, &vars);
		mlx_hook(vars.win, 12, 1L << 15, expose_hook, &vars);
		mlx_hook(vars.win, 17, 1L << 2, quit_game, &vars);
		mlx_loop(vars.mlx);
	}
	else
		handle_arguments_error();
	return (0);
}
