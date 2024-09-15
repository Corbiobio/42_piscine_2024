/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:38:39 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/19 19:18:25 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digit(int c)
{
	c += '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			ft_print_digit(2);
			nb = -147483648;
		}
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_print_digit(nb);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_print_digit(nb % 10);
}

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// 	return (0);
// }
