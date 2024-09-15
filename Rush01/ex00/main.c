/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:53:40 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/18 22:56:01 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "utilities.h"
#include "map.h"
#include "params.h"

//start the program and make verif arg
int	main(int argc, char **argv)
{
	int		**map;
	int		i;

	if (verif_params(argc, argv) == 0)
		write(1, "Error\n", 6);
	else
	{
		map = build_map();
		if (map == NULL)
			write(1, "Error\n", 6);
		else
		{
			update_map(map, 0, 0, argv[1]);
			if (argv[1][0] != 'w')
				write(1, "Error\n", 6);
			i = 0;
			while (i < MAP_LEN)
			{
				free(map[i]);
				i++;
			}
			free(map);
		}
	}
	return (0);
}
