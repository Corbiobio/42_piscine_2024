/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebrende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:53:18 by lebrende          #+#    #+#             */
/*   Updated: 2024/08/10 16:32:13 by lebrende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	long_check(int i_x, int i_y, int x, int y)
{
	int	check1;
	int	check2;

	check1 = i_y == 0 && (i_x == 0 || i_x == x -1);
	check2 = i_y == y -1 && (i_x == x -1 || i_x == 0);
	return (check1 + check2);
}

void	rush(int x, int y)
{
	int	i_x;
	int	i_y;

	i_x = 0;
	i_y = 0;
	while (i_y < y && x > 0)
	{
		while (i_x < x)
		{
			if (long_check(i_x, i_y, x, y))
				ft_putchar('o');
			else if (i_x == 0 || i_x == x -1)
				ft_putchar('|');
			else if (i_y == 0 || i_y == y -1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			i_x++;
		}
		i_x = 0;
		ft_putchar('\n');
		i_y++;
	}
}
