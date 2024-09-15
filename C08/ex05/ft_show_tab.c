/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:49:07 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/29 09:58:22 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>//write

void	write_str(char *str)
{
	write(1, str, str_len(str));
}

void	write_nbr(int nbr)
{
	char	c;

	if (nbr >= 10)
		write_nbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int				i;
	unsigned int	nbr;

	i = 0;
	while (par[i].str != 0)
	{
		write_str(par[i].str);
		write_str("\n");
		write_nbr(par[i].size);
		write_str("\n");
		write_str(par[i].copy);
		write_str("\n");
		i++;
	}
}

// int	main(int argc, char **argv)
// {
// 	t_stock_str	*arr;

// 	arr = ft_strs_to_tab(argc, argv);

// 	ft_show_tab(arr);
// 	return (0);
// }
