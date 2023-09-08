/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_arguments.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isettou42 <isettou42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:29:56 by isettou           #+#    #+#             */
/*   Updated: 2023/09/08 11:42:23 by isettou42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	parsing_arguments(int argc, char **argv)
{
	int	errors;

	(void) argv;
	errors = 0;
	if (parsing_nb_arguments(argc))
		return (1);
	errors += parsing_map_extension(argv[1]);
	errors += parsing_arguments_map(argv[1]);
	return (errors);
}

int	parsing_arguments_map(char *map_path)
{
	int	fd;

	fd = open(map_path, O_RDONLY);
	if (fd < 0)
		exit(EXIT_FAILURE); //error 
	close(fd);
	return (0);
}

int	parsing_map_extension(char *map_path)
{
	if (ft_strncmp(&map_path[ft_strlen(map_path) - 4], ".ber", 4))
		exit(EXIT_FAILURE); //error 
	return (0);
}

int	parsing_nb_arguments(int argc)
{
	if (argc < 2)
		exit(EXIT_FAILURE); //error 
	if (argc > 2)
		exit(EXIT_FAILURE); //error 
	return (0);
}

int	error_message_args(void)
{
	ft_printf("Error");
	return (1);
}
