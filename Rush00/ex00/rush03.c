/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:00:01 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/10 15:26:24 by themarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		i_x;
	int		i_y;

	i_x = 0;
	i_y = 0;
	while (i_y < y && x > 0)
	{
		while (i_x < x)
		{
			if (i_x == 0 && (i_y == 0 || i_y == y -1))
				ft_putchar('A');
			else if (i_x == x - 1 && (i_y == 0 || i_y == y - 1))
				ft_putchar('C');
			else if ((i_x == 0 || i_x == x - 1) || (i_y == 0 || i_y == y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i_x++;
		}
		i_x = 0;
		ft_putchar('\n');
		i_y++;
	}
}
