/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:02:33 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/26 14:30:27 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>//printf

int	ft_ultimate_range(int **range, int min, int max)
{
	int				i;
	unsigned int	size;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int *));
	if (range == NULL)
		return (-1);
	size = max - min;
	range[0] = malloc(sizeof(int) * size);
	if (range[0] == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int		*arr;
// 	// int		i = 0;

// 	ft_ultimate_range(&arr, -51, -50);
// 	// while (i < 5)
// 	// {
// 	// 	printf("%d\n", arr[i]);
// 	// 	i++;
// 	// }
// }
