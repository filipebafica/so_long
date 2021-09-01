/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 14:32:11 by fbafica           #+#    #+#             */
/*   Updated: 2021/08/25 21:39:10 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	map_check(char *map_name, char **map)
{
	if (ft_memcmp(ft_strrchr(map_name, '.'), ".ber", 4) != 0)
		return (handle_extension_error());
	if (load_map(map_name, map) == -1)
		return (handle_bad_file_error());
	if (check_diff_characters(*map, "01CEP") == -1)
		return (handle_bad_characters_error());
	if (check_missing_characters(*map, "01CEP") == -1)
		return (handle_missing_characters_error());
	if (check_multiple_players(*map) == -1)
		return (handle_multiple_players_error());
	if (check_equal_columns(*map) == -1)
		return (handle_not_rectangular_error());
	if (check_first_last_line(*map) == -1)
		return (handle_not_surrounded_error());
	if (check_first_last_columns(*map) == -1)
		return (handle_not_surrounded_error());
	return (0);
}
