/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isettou42 <isettou42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:19:10 by isettou42         #+#    #+#             */
/*   Updated: 2023/09/08 12:33:39 by isettou42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define WALL			'1'
# define GROUND			'0'
# define PLAYER			'P'
# define COLLECTIBLE	'C'
# define EXIT			'E'
# define TEXTURE_RESOLUTION	64
# include "mlx/mlx_png.h"
# include "mlx/mlx_opengl.h"
# include "mlx/mlx_new_window.h"
# include "mlx/mlx.h"
# include "./Libft/libft.h"
# include "./get_next_line/get_next_line.h"
# include "./printf/ft_printf.h"
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <stdio.h>

typedef struct s_textures
{
	char	*wall;
	char	*player;
	char	*coll;
	char	*ground;
	char	*exit;

	void	*wall_xpm;
	void	*player_xpm;
	void	*coll_xpm;
	void	*ground_xpm;
	void	*exit_xpm;
}t_textures;

typedef struct s_player
{
	int		movements;
}t_player;

typedef struct s_data
{
	t_textures	texture;
	t_player	player;
	char		**map;
	void		*mlx_ptr;
	void		*win_ptr;
}t_data;

char		**map_extraction(int map_fd);
char		*free_and_join(char *s1, char *s2);
int			parsing_map(char **map);
int			parsing_map_empty(char **map);
int			parsing_map_walls(char **map);
int			parsing_map_square(char **map);
int			parsing_map_composition(char **map);
int			parsing_map_exit_reachable(char **map);
int			error_message_map(void);
void		map_replace_char(char **map, char to_replace, char replace);
int			map_len(char **map);
int			map_surface(char **map);
int			map_clone(char **dest, char **src);
int			map_count_char(char **str, char c);
int			map_search_around(char **map, int x, int y, char to_find);
int			get_coordinates(char orientation, char **map, char c, int min_len);
char		**map_virus(char **map, char to_keep, char to_replace,
				char virus);
char		**map_virus_draw_around(char **map, int x, int y, char *to);
int			parsing_nb_arguments(int argc);
int			parsing_map_extension(char *map_path);
int			parsing_map_err(int error_id, char *prefix, int fd, int ret);
int			parsing_arguments_map(char *map_path);
int			parsing_arguments(int argc, char **argv);
int		error_message_args(void);
int			game_main(char **map);
t_data		game_init(void *mlx_ptr, char **map);
t_data		data_init(void *mlx_ptr, char **map);
void		game_loop(t_data data);
void		game_exit(t_data *data, int exit_x, int exit_y);
int			game_end(void);
int			control_key_management(int key, t_data *data);
t_data		*control_key_move(int key, t_data *data);
t_data		*move_object(t_data *data, char character,
				char *direction, char collision);
void		*graphic_new_window(void *mlx_ptr, char **map);
void		graphic_put_textures(t_textures t, char **map, void *m, void *w);
t_textures	graphic_init_textures(void *mlx_ptr);
void		ft_display_map(char **map);
int			check_only_char(char *str, char c);
void		free_arr_arr(int free_end, char **str);
int			error_message_data_init(int error_id, char *p, int fd, int ret);
#endif