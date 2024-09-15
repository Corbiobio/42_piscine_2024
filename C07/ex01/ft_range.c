/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:21:08 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/26 14:12:39 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>//malloc
// #include <stdio.h>//printf

int	*ft_range(int min, int max)
{
	int				*arr;
	int				i;
	unsigned int	size;

	arr = NULL;
	if (min >= max)
		return (arr);
	size = max - min;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (arr);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

// int	main(void)
// {
// 	int 	i = 0;
// 	int		*arr;

// 	arr = ft_range(-10, 10);
// 	while (i < 21)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }
