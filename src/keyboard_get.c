/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard_get.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:18:37 by fbafica           #+#    #+#             */
/*   Updated: 2021/08/26 14:43:04 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include <stdio.h>

int	get_player_position(char *map)
{
	int	i;

	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == 'P')
			break ;
		++i;
	}
	if (map[i] == '\0')
		return ('\0');
	return (i);
}

int	get_col_len(char *map)
{
	int	i;

	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == '\n')
			break ;
		++i;
	}
	return (i + 1);
}

int	validate_keycode(int keycode, t_vars vars)
{
	int		col_len;
	int		player_position;

	col_len = get_col_len(vars.map);
	player_position = get_player_position(vars.map);
	if (keycode == 119)
		return (move_up(col_len, player_position, vars));
	else if (keycode == 115)
		return (move_down(col_len, player_position, vars));
	else if (keycode == 100)
		return (move_right(player_position, vars));
	else if (keycode == 97)
		return (move_left(player_position, vars));
	else if (keycode == 65307)
		return (quit_game());
	else
		return (0);
}

int	keyboard_hook(int keycode, t_vars *vars)
{
	int			temp_movements;
	static int	movements;

	temp_movements = movements;
	movements += validate_keycode(keycode, *vars);
	init_map(*vars);
	if (movements != temp_movements)
	{
		ft_putstr_fd("Movements: ", 1);
		ft_putnbr_fd(movements, 1);
		ft_putchar_fd('\n', 1);
	}
	return (movements);
}
