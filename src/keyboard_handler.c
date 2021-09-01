/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 09:40:31 by fbafica           #+#    #+#             */
/*   Updated: 2021/08/24 16:30:23 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	move_up(int col_len, int player_position, t_vars vars)
{
	if (player_position)
	{
		if ((vars.map)[player_position - col_len] != '1' && \
		(vars.map)[player_position - col_len] != 'E')
		{
			(vars.map)[player_position] = '0';
			(vars.map)[player_position - col_len] = 'P';
			return (1);
		}
		if ((vars.map)[player_position - col_len] == 'E')
		{
			if (!ft_strchr(vars.map, 'C'))
			{
				(vars.map)[player_position] = '0';
				return (1);
			}
		}
	}
	return (0);
}

int	move_down(int col_len, int player_position, t_vars vars)
{
	if (player_position)
	{
		if ((vars.map)[player_position + col_len] != '1' && \
		(vars.map)[player_position + col_len] != 'E')
		{
			(vars.map)[player_position] = '0';
			(vars.map)[player_position + col_len] = 'P';
			return (1);
		}
		if ((vars.map)[player_position + col_len] == 'E')
		{
			if (!ft_strchr(vars.map, 'C'))
			{
				(vars.map)[player_position] = '0';
				return (1);
			}
		}
	}
	return (0);
}

int	move_right(int player_position, t_vars vars)
{
	if (player_position)
	{
		if ((vars.map)[player_position + 1] != '1' && \
		(vars.map)[player_position + 1] != 'E')
		{
			(vars.map)[player_position] = '0';
			(vars.map)[player_position + 1] = 'P';
			return (1);
		}
		if ((vars.map)[player_position + 1] == 'E')
		{
			if (!ft_strchr(vars.map, 'C'))
			{
				(vars.map)[player_position] = '0';
				return (1);
			}
		}
	}
	return (0);
}

int	move_left(int player_position, t_vars vars)
{
	if (player_position)
	{
		if ((vars.map)[player_position - 1] != '1' && \
		(vars.map)[player_position - 1] != 'E')
		{
			(vars.map)[player_position] = '0';
			(vars.map)[player_position - 1] = 'P';
			return (1);
		}
		if ((vars.map)[player_position - 1] == 'E')
		{
			if (!ft_strchr(vars.map, 'C'))
			{
				(vars.map)[player_position] = '0';
				return (1);
			}
		}
	}
	return (0);
}
