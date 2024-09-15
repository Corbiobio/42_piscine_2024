/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:20:28 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/23 09:28:41 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	total;
	int	last_add;
	int	i;

	total = 1;
	last_add = 1;
	i = 1;
	while (total < nb)
	{
		last_add += 2;
		total += last_add;
		i++;
	}
	if (total == nb)
		return (i);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_sqrt(4));
// 	return (0);
// }
