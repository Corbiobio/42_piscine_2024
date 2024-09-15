/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:41:57 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/27 10:08:01 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int		total;

	if (power < 0)
		return (0);
	else if (power == 0 || nb == 0)
		return (1);
	total = nb;
	power--;
	while (power > 0)
	{
		total *= nb;
		power--;
	}
	return (total);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(8, 0));
// 	return (0);
// }
