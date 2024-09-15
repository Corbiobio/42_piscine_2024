/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:07:54 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/23 14:00:52 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_power(int *total, int nb, int power)
{
	if (power > 0)
	{
		*total *= nb;
		ft_power(total, nb, power - 1);
	}
}

int	ft_recursive_power(int nb, int power)
{
	int		total;

	if (power < 0)
		return (0);
	else if (power == 0 || nb == 0)
		return (1);
	total = nb;
	power--;
	ft_power(&total, nb, power);
	return (total);
}

// int	main(void)
// {
// 	printf("%d", ft_recursive_power(11, 4));
// 	return (0);
// }
