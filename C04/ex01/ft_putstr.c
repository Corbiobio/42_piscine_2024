/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:23:10 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/20 15:03:44 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int		i;
	int		str_len;

	i = 0;
	str_len = ft_strlen(str);
	write(1, str, str_len);
}

// int	main(void)
// {
// 	ft_putstr("abdsfsg");
// 	return (0);
// }
