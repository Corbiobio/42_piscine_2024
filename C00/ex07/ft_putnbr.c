/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:02:12 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/08 23:04:13 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// int	ft_reduce_int(int nb)
// {
// 	int		rest;

// 	rest = nb % 10;
// 	nb = nb - rest;
// 	return (nb / 10);
// }

int	reduce_to_min_digit(int nb)
{
	int		rest;

	while (nb >= 10)
	{
		rest = nb % 10;
		nb = nb - rest;
		nb = (nb / 10);
	}
	return (nb);
}

int	count_int(int nb)
{
	int		i;

	i = 0;
	while (nb >= 1)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

// int	pow_n_10(int n, int nb)
// {
// 	while (n > 0)
// 	{
// 		nb = nb * 10;
// 		n--;
// 	}
// 	return (nb);
// }

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	if_inf_0(int *pt_nbr)
{
	int		nb;

	nb = *pt_nbr;
	if (nb < 0)
	{
		ft_print_char('-');
		if (nb == -2147483648)
		{
			ft_print_char('2');
			nb = -147483648;
		}
		nb = nb * -1;
	}
	else if (nb == 0)
	{
		ft_print_char('0');
	}
	*pt_nbr = nb;
}

// void	ft_print_digit(int i)
// {
// 	char	c;

// 	c = '0' + i;
// 	ft_print_char(c);
// }

void	ft_putnbr(int nb)
{
	int		len;
	int		digit;
	int		n;

	if_inf_0(&nb);
	len = count_int(nb);
	while (len > 0)
	{
		if (count_int(nb) != len)
			ft_print_char('0' + 0);
		else
		{
			digit = reduce_to_min_digit(nb);
			ft_print_char('0' + digit);
			n = len - 1;
			while (n > 0)
			{
				digit *= 10;
				n--;
			}
			nb -= digit;
		}
		len--;
	}
}

// int	main(void)
// {
// 	ft_putnbr(0);
// 	return (0);
// }