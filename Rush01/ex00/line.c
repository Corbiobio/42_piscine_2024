/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:20:04 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/18 21:51:48 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "utilities.h"
#include "cells.h"

//get every value of a column and put in a array
int	*get_column_value(int **map, int x)
{
	int		*column;
	int		i;

	column = malloc(sizeof(int) * MAP_LEN);
	if (column == NULL)
		return (NULL);
	i = 0;
	while (i < MAP_LEN)
	{
		column[i] = map[i][x];
		i++;
	}
	return (column);
}

//make verif on a line from each side
int	is_line_valid(int *line, int *cells)
{
	int		cell_1;
	int		cell_2;

	cell_1 = cells[0];
	cell_2 = cells[1];
	if (comp_cell_line(line, cell_1) == 0)
		return (0);
	else if (comp_cell_line_reverse(line, cell_2) == 0)
		return (0);
	return (comp_cell_line_reverse(line, cell_2));
}

//verif for a row
int	is_row_ok(int *row, char *str, int y)
{
	int		cells[2];

	get_cells_row(cells, str, y);
	return (is_line_valid(row, cells));
}

//verif for a column
int	is_column_ok(int **map, char *str, int x)
{
	int		cells[2];
	int		*column;
	int		line_is_valid;

	column = get_column_value(map, x);
	get_cells_column(cells, str, x);
	line_is_valid = is_line_valid(column, cells);
	free(column);
	return (line_is_valid);
}
