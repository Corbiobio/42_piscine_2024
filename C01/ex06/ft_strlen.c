/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 14:23:27 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/10 14:24:03 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;
	char	*c;

	i = 0;
	c = str + i;
	while (*c != '\0')
	{
		i++;
		c = str + i;
	}
	return (i);
}

// int	main(void)
// {
// 	int		len;
// 	char	c;

// 	len = ft_strlen("acdeeee");
// 	c = '0' + len;
// 	write(1, &c, 1);
// 	return (0);
// }
