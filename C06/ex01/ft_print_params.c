/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:00:08 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/14 21:03:07 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		i_letter;

	i = 1;
	while (i < argc)
	{
		i_letter = 0;
		while (argv[i][i_letter] != '\0')
		{
			write(1, argv[i] + i_letter, 1);
			i_letter++;
		}
		write(1, "\n", 1);
		i++;
	}
}
