/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 20:53:43 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/27 10:06:35 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int		i;

	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	i = 3;
	while (i <= (nb / 2 + 1))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

// int	main(void)
// {
// 	printf("%d", ft_find_next_prime(2147483646));
// 	return (0);
// }
