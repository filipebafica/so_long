/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:16:36 by fbafica           #+#    #+#             */
/*   Updated: 2021/08/24 22:37:54 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	buffer_update(char **buffer, char **map)
{
	char	*temp;

	temp = ft_strjoin(*map, *buffer);
	free(*map);
	*map = ft_strdup(temp);
	free(temp);
}

int	load_map(char *map_name, char **map)
{
	int		fd;
	int		read_call;
	char	*buffer;

	fd = open(map_name, O_RDONLY);
	*map = ft_calloc(1, 1);
	buffer = malloc(100);
	read_call = read(fd, buffer, 99);
	while (read_call > 0)
	{
		buffer[read_call] = '\0';
		buffer_update(&buffer, map);
		read_call = read(fd, buffer, 99);
	}
	free (buffer);
	if (fd == -1 || read_call == -1)
		return (-1);
	return (0);
}
