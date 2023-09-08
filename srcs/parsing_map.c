/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isettou42 <isettou42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:21:42 by isettou42         #+#    #+#             */
/*   Updated: 2023/09/08 11:48:58 by isettou42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	parsing_map(char **map)
{
	if (parsing_map_empty(map))
		exit(EXIT_FAILURE); //error 
	if (parsing_map_square(map))
		exit(EXIT_FAILURE); //error 
	if (parsing_map_walls(map))
		exit(EXIT_FAILURE); //error 
	if (parsing_map_composition(map))
		exit(EXIT_FAILURE); //error 
	if (parsing_map_exit_reachable(map))
		exit(EXIT_FAILURE); //error 
	return (0);
}

int	error_message_map(void)
{
	// if (error_id == 10)
	// 	ft_fprintf(fd, "[%s] : Error, map is invalid\n", p);
	// if (error_id == 11)
	// 	ft_fprintf(fd, "[%s] : Error, map is not a SQUARE\n", p);
	// if (error_id == 12)
	// 	ft_fprintf(fd, "[%s] : Error, map border is incorrect\n", p);
	// if (error_id == 13)
	// 	ft_fprintf(fd, "[%s] : Error, map composition is incorrect\n", p);
	// if (error_id == 14)
	// 	ft_fprintf(fd, "[%s] : Error, backtracking error\n", p);
	// if (error_id == 15)
	// 	ft_fprintf(fd, "[%s] : Error, map extension\n", p);
	// return (ret);
	ft_printf("Error\n");
	return (1);
}

int	error_message_data_init(int error_id, char *p, int fd, int ret)
{
	(void)error_id;
	(void)*p; 
	(void)fd; 
	(void)ret;
	// if (error_id == 10)
		//ft_fprintf(fd, "[%s] : Error, cannot open texture\n", p);
	return (1);
}

int	parsing_map_err(int error_id, char *prefix, int fd, int ret)
{
	(void)error_id;
	(void)prefix;
	(void)fd;
	(void)ret;
	// if (error_id == 10)
	// 	ft_fprintf(fd, "[%s] : Error, EXIT not reachable\n", prefix);
	// if (error_id == 11)
	// 	ft_fprintf(fd, "[%s] : Error, COLLECTIBLE not reachable\n", prefix);
	// if (error_id == 20)
	// 	ft_fprintf(fd, "[%s] : Error, number of EXIT\n", prefix);
	// if (error_id == 21)
	// 	ft_fprintf(fd, "[%s] : Error, number of PLAYER\n", prefix);
	// if (error_id == 22)
	// 	ft_fprintf(fd, "[%s] : Error, number of COLLECTIBLE\n", prefix);
	// if (error_id == 23)
	// 	ft_fprintf(fd, "[%s] : Error, unknown element\n", prefix);
	// return (ret);
	exit(EXIT_FAILURE);
}
