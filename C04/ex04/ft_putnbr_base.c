/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:45:55 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/20 11:03:07 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

//return len or 0 if have error
int	ft_base_len(char *base)
{
	int		len;
	int		i;

	len = 0;
	while (base[len] != '\0')
	{
		if (base[len] == '-' || base[len] == '+')
			return (0);
		i = len + 1;
		while (base[i] != '\0')
		{
			if (base[i] == base[len])
				return (0);
			i++;
		}
		len++;
	}
	if (len <= 1)
		return (0);
	return (len);
}

void	ft_calc_base(unsigned int nbr, char *base, int base_len)
{
	char			digit_to_print;
	unsigned int	new_base_len;

	new_base_len = base_len;
	if (nbr >= new_base_len)
	{
		ft_calc_base(nbr / new_base_len, base, base_len);
	}
	digit_to_print = base[nbr % new_base_len];
	write(1, &digit_to_print, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				len;
	unsigned int	new_nbr;

	len = ft_base_len(base);
	if (len == 0)
		return ;
	new_nbr = nbr;
	if (nbr < 0)
	{
		new_nbr = nbr * -1;
		write(1, "-", 1);
	}
	ft_calc_base(new_nbr, base, len);
}

// int	main(void)
// {
// 	int		nbr = -2147483648;
// 	char	*base = "01";

// 	ft_putnbr_base(nbr, base);
// }
