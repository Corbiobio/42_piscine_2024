/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:41:00 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/18 16:47:13 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINE_H
# define LINE_H

int	is_line_valid(int *line, int *cells);
int	is_row_ok(int *row, char *str, int y);
int	is_column_ok(int **map, char *str, int x);
int	*get_column_value(int **map, int x);

#endif
