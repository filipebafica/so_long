/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 22:18:50 by fbafica           #+#    #+#             */
/*   Updated: 2021/08/26 14:45:53 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H
# define COLLECT_PATH "assets/collect.xpm"
# define EMPTY_PATH "assets/empty.xpm"
# define EXIT_PATH "assets/exit.xpm"
# define PLAYER_PATH "assets/player.xpm"
# define WALL_PATH "assets/wall.xpm"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"
# include "mlx.h"

typedef struct s_assets
{
	void	*img;
	int		width;
	int		height;
}				t_assets;

typedef struct s_vars
{
	void		*mlx;
	void		*win;
	char		*map;
	t_assets	collect;
	t_assets	empty;
	t_assets	exit;
	t_assets	player;
	t_assets	wall;
}				t_vars;

int		handle_bad_file_error(void);
int		handle_extension_error(void);
int		handle_bad_characters_error(void);
int		handle_multiple_players_error(void);
int		handle_missing_characters_error(void);
int		handle_not_surrounded_error(void);
int		handle_not_rectangular_error(void);
int		handle_arguments_error(void);
int		check_first_last_line(char *map);
int		check_equal_columns(char *map);
int		check_first_last_columns(char *map);
int		check_diff_characters(char *map, char *characters);
int		check_missing_characters(char *map, char *characters);
int		check_multiple_players(char *map);
int		map_check(char *map_name, char **map);
int		load_map(char *map_name, char **map);
void	buffer_update(char **buffer, char **map);
void	load_assets(t_vars *vars);
void	*init_win(t_vars vars);
void	init_map(t_vars vars);
int		keyboard_hook(int keycode, t_vars *vars);
int		mouse_hook(int button, int x, int y, t_vars *vars);
int		move_up(int col_len, int player_position, t_vars vars);
int		move_down(int col_len, int player_position, t_vars vars);
int		move_right(int player_position, t_vars vars);
int		move_left(int player_position, t_vars vars);
int		quit_game(void);
int		expose_hook(t_vars *vars);

#endif