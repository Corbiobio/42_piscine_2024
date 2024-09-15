/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:25:03 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/09 14:12:17 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tmp;

	tmp = *a % *b;
	*a = *a / *b;
	*b = tmp;
}

//int	main(void)
//{
//	int a;
//	int b;
//	char c;
//
//	a = 10;
//	b = 5;
//	ft_ultimate_div_mod(&a, &b);
//	c = '0' + a;
//	write(1, &c, 1);
//	c = '0' + b;	
//	write(1, &c, 1);
//	return (0);
//}
