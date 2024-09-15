/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 09:10:59 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/18 22:55:05 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "utilities.h"
#include "line.h"
#include "verif_digit.h"

//build map with malloc
int	**build_map(void)
{
	int		**map;
	int		y;
	int		x;

	map = malloc(sizeof(int *) * MAP_LEN + 1);
	if (map == NULL)
		return (NULL);
	y = 0;
	while (y < MAP_LEN)
	{
		map[y] = malloc(sizeof(int) * MAP_LEN);
		if (map[y] == NULL)
			return (NULL);
		x = 0;
		while (x < MAP_LEN)
		{
			map[y][x] = 0;
			x++;
		}
		y++;
	}
	return (map);
}

//print the map
void	display_map(int **map)
{
	int		y;
	int		x;
	char	character;

	y = 0;
	while (y < MAP_LEN)
	{
		x = 0;
		while (x < MAP_LEN)
		{
			character = '0' + map[y][x];
			write(1, &character, 1);
			x++;
			if (x != MAP_LEN)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		y++;
	}
}

//when map found, show it, and set value for the win
void	map_is_found(int **map, char *str)
{
	display_map(map);
	str[0] = 'w';
}

//update recursively each value
void	update_map(int **map, int x, int y, char *str)
{
	int		i;

	i = 1;
	while (i <= MAP_LEN && str[0] != 'w')
	{
		map[y][x] = i;
		if (is_digit_unique(map, x, y) != 0)
		{
			if (x == MAP_LEN - 1)
			{
				if (y == MAP_LEN - 1
					&& is_row_ok(map[y], str, y) && is_column_ok(map, str, x))
					map_is_found(map, str);
				else if (y < MAP_LEN - 1 && is_row_ok(map[y], str, y))
					update_map(map, 0, y + 1, str);
			}
			else if ((y == MAP_LEN - 1 && is_column_ok(map, str, x))
				|| y < MAP_LEN - 1)
				update_map(map, x + 1, y, str);
		}
		i++;
	}
	map[y][x] = 0;
}
