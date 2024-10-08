/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:18:19 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/09 14:44:08 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

// int	main(void)
// {
// 	ft_putstr("abcdeeee");
// }
