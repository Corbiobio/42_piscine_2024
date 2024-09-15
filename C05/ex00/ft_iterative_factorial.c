/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:40:01 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/20 11:29:18 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		total;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	total = nb;
	nb--;
	while (nb > 0)
	{
		total *= nb;
		nb--;
	}
	return (total);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(8));
// 	return (0);
// }
