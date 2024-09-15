/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:55:45 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/14 21:29:38 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		y;

	i = 0;
	while (i < size)
	{
		y = i ;
		while (y < size)
		{
			if (tab[y] < tab[i])
			{
				ft_swap(tab + i, tab + y);
			}
			y++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int i;
// 	int arr[12] = {100,0,14,15,12,5,89,-13,14,0,0,-50};
// 	ft_sort_int_tab(arr,12);

// 	i = 0;
// 	while (i < 12)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }