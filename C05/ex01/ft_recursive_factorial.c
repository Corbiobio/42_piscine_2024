/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:27:08 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/20 11:30:38 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_factorial(int nb, int *total)
{
	if (nb > 0)
	{
		*total *= nb;
		ft_factorial(nb - 1, total);
	}
}

int	ft_recursive_factorial(int nb)
{
	int		total;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	total = nb;
	nb--;
	ft_factorial(nb, &total);
	return (total);
}

// int	main(void)
// {
// 	printf("%d", ft_recursive_factorial(8));
// 	return (0);
// }
