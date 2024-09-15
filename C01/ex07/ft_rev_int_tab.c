/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 14:37:17 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/10 14:37:19 by edarnand         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;

	i = 0;
	if (size % 2 != 0)
		size--;
	while (i < size / 2)
	{
		ft_swap(tab + i, tab + (size - i - 1));
		i++;
	}
}

// int	main(void)
// {
// 	int i;
// 	int arr[8] = {5,8,9,10,15,16,48,100};
// 	ft_rev_int_tab(arr,8);

// 	i = 0;
// 	while (i < 8)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }