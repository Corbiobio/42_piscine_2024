/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:51:07 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/09 13:05:38 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
//
//int	main(void)
//{
//	int a = 8;
//	int b = 2;
//	char c = '0';
//	ft_swap(&a, &b);
//	c += a;
//	write(1, &c, 1);
//
//	c = '0' + b;
//	write(1, &c, 1);
//	return (0);
//}
