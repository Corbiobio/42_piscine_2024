/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:25:35 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/29 09:58:28 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>//printf
#include <unistd.h>//write
#include <stdlib.h>//malloc
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*str_copy(char *str)
{
	int		len;
	int		i;
	char	*new;

	len = str_len(str);
	i = 0;
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].str = av[i];
		arr[i].size = str_len(av[i]);
		arr[i].copy = str_copy(av[i]);
		i++;
	}
	arr[ac].size = 0;
	arr[ac].str = 0;
	arr[ac].copy = 0;
	return (arr);
}

// void	write_str(char *str)
// {
// 	write(1, str, str_len(str));
// }

// void	write_nbr(int nbr)
// {
// 	char	c;

// 	if (nbr >= 10)
// 		write_nbr(nbr / 10);
// 	c = nbr % 10 + '0';
// 	write(1, &c, 1);
// }

// int	main(int argc, char **argv)
// {
// 	int			i;
// 	t_stock_str	*arr;

// 	arr = ft_strs_to_tab(argc, argv);
// 	i = 0;
// 	while (arr[i].str != 0)
// 	{
// 		write_str(arr[i].str);
// 		write_str("\n");
// 		write_str(arr[i].copy);
// 		write_str("\n");
// 		write_nbr(arr[i].size);
// 		write_str("\n");
// 		i++;
// 	}
// 	return (0);
// }
