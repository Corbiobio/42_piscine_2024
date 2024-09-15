/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cells.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 00:26:48 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/18 10:23:55 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CELLS_H
# define CELLS_H

void	get_cells_column(int *cells, char *str, int x);
void	get_cells_row(int *cells, char *str, int y);
int		comp_cell_line(int *line, int cell);
int		comp_cell_line_reverse(int *line, int cell);

#endif