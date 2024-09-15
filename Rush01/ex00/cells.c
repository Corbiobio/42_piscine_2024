/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cells.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 00:26:52 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/18 21:48:48 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"

//get cells from the actual row
void	get_cells_row(int *cells, char *str, int y)
{
	int		index_str;

	index_str = (MAP_LEN * 4) + (y * 2);
	cells[0] = str[index_str] - '0';
	cells[1] = str[index_str + MAP_LEN * 2] - '0';
}

//get cells from the actual column
void	get_cells_column(int *cells, char *str, int x)
{
	int		index_str;

	index_str = 0 + (x * 2);
	cells[0] = str[index_str] - '0';
	cells[1] = str[index_str + MAP_LEN * 2] - '0';
}

//compare each value from the line with a cell
int	comp_cell_line(int *line, int cell)
{
	int		i;
	int		good;
	int		max_int;

	i = 1;
	good = 1;
	max_int = line[0];
	while (i < MAP_LEN)
	{
		if (max_int < line[i])
		{
			max_int = line[i];
			good++;
		}
		i++;
	}
	if (good == cell)
		return (1);
	return (0);
}

//compare each value from the line with a cell in reverse
int	comp_cell_line_reverse(int *line, int cell)
{
	int		i;
	int		good;
	int		max_int;

	i = MAP_LEN - 2;
	good = 1;
	max_int = line[MAP_LEN - 1];
	while (i >= 0)
	{
		if (max_int < line[i])
		{
			max_int = line[i];
			good++;
		}
		i--;
	}
	if (good == cell)
		return (1);
	return (0);
}
