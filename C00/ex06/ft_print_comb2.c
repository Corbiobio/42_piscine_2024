/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:00:32 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/08 15:36:27 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_digit(int i)
{
	i = '0' + i;
	write(1, &i, 1);
}

void	ft_print_comb(int di, int un)
{
	int		un_copy;
	int		di_copy;

	un_copy = un + 1;
	di_copy = di;
	while (di_copy <= 9)
	{
		while (un_copy <= 9)
		{
			ft_print_digit(di);
			ft_print_digit(un);
			write(1, " ", 1);
			ft_print_digit(di_copy);
			ft_print_digit(un_copy);
			if (di != 9 || un != 8)
				write(1, ", ", 2);
			un_copy++;
		}
		un_copy = 0;
		di_copy++;
	}
}

void	ft_print_comb2(void)
{
	int		un;
	int		di;

	un = 0;
	di = 0;
	while (di <= 9)
	{
		while (un <= 9)
		{
			ft_print_comb(di, un);
			un++;
		}
		un = 0;
		di++;
	}
}
//
// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }