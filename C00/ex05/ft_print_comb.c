/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 21:27:18 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/08 13:55:40 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_int(int i)
{
	i = '0' + i;
	write(1, &i, 1);
}

void	ft_print_comb(void)
{
	int		ce;
	int		di;
	int		un;

	ce = 0;
	while (ce <= 9)
	{
		di = ce + 1;
		while (di <= 9)
		{
			un = di + 1;
			while (un <= 9)
			{
				ft_print_int(ce);
				ft_print_int(di);
				ft_print_int(un);
				if (ce != 7 || di != 8 || un != 9)
					write(1, ", ", 2);
				un++;
			}
			di++;
		}
		ce++;
	}
}
//
//int	main(void)
//{
//	ft_print_comb();
//	return (0);
//}
