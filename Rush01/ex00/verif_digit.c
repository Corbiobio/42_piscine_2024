/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:02:49 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/18 22:08:11 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//verif if digit is unique in row
int	verif_digit_in_row(int **map, int x, int y, int digit)
{
	while (x > 0)
	{
		x--;
		if (map[y][x] == digit)
			return (0);
	}
	return (1);
}

//verif if digit is unique in column
int	verif_digit_in_column(int **map, int x, int y, int digit)
{
	while (y > 0)
	{
		y--;
		if (map[y][x] == digit)
			return (0);
	}
	return (1);
}

//verif if digit is unique in row and in column
int	is_digit_unique(int **map, int x, int y)
{
	int		digit;

	digit = map[y][x];
	if (verif_digit_in_row(map, x, y, digit) == 0)
		return (0);
	else if (verif_digit_in_column(map, x, y, digit) == 0)
		return (0);
	return (1);
}
