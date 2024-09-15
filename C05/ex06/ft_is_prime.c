/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:33:10 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/27 10:05:22 by edarnand         ###   ########.fr       */
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

// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(2147483647));
// 	return (0);
// }
