/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isettou42 <isettou42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:11:31 by isettou           #+#    #+#             */
/*   Updated: 2023/09/08 11:40:04 by isettou42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_data	data_init(void *mlx_ptr, char **map)
{
	t_data	data;

	data.texture = graphic_init_textures(mlx_ptr);
	data.map = malloc(sizeof(char *) * (map_len(map) + 1));
	map_clone(data.map, map);
	data.player.movements = 0;
	return (data);
}
