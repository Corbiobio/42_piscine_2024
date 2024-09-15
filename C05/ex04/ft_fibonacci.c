/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:17:41 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/20 13:18:44 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_fibo(int *total, int old_total, int i)
{
	int		buff;

	if (i > 0)
	{
		buff = *total;
		*total += old_total;
		old_total = buff;
		ft_fibo(total, old_total, i - 1);
	}
}

int	ft_fibonacci(int index)
{
	int		total;
	int		nb;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	total = 0;
	nb = 1;
	ft_fibo(&total, nb, index);
	return (total);
}

// int	main(void)
// {
// 	printf("%d", ft_fibonacci(10));
// 	return (0);
// }
