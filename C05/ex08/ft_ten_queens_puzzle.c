/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:26:49 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/23 09:32:28 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>
#define BOARD_LEN 10

void	display_game(char queens[])
{
	write(1, queens, BOARD_LEN);
	write(1, "\n", 1);
}

int	is_unique_row(char queens[], int x)
{
	int		i;

	i = 0;
	while (i < x)
	{
		if (queens[i] != '.' && queens[i] == queens[x])
			return (-1);
		i++;
	}
	return (1);
}

int	is_unique_digo(char queens[], int x)
{
	char	y_top;
	char	y_bottom;

	y_top = queens[x];
	y_bottom = queens[x];
	while (x > 0)
	{
		x--;
		y_top--;
		y_bottom++;
		if (queens[x] == y_top || queens[x] == y_bottom)
			return (-1);
	}
	return (1);
}

void	place_queen(char queens[], int x, int *total)
{
	int		y;

	y = 0;
	while (y < BOARD_LEN && x < BOARD_LEN)
	{
		queens[x] = '0' + y;
		if (is_unique_row(queens, x) == 1 && is_unique_digo(queens, x) == 1)
		{
			if (x == BOARD_LEN - 1 && queens[x] != '.')
			{
				display_game(queens);
				*total += 1;
			}
			else
				place_queen(queens, x + 1, total);
		}
		else
			queens[x] = '.';
		y++;
	}
	queens[x - 1] = '.';
}

int	ft_ten_queens_puzzle(void)
{
	char	queens[BOARD_LEN + 1];
	int		i;
	int		total;

	i = 0;
	total = 0;
	while (i < BOARD_LEN)
	{
		queens[i] = '.';
		i++;
	}
	place_queen(queens, 0, &total);
	return (total);
}

// int	main(void)
// {
// 	printf("%d", ft_ten_queens_puzzle());
// 	return (0);
// }
