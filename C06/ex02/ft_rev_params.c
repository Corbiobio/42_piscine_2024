/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:00:08 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/14 21:03:09 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i_letter;

	while (1 < argc)
	{
		i_letter = 0;
		while (argv[argc - 1][i_letter] != '\0')
		{
			write(1, argv[argc - 1] + i_letter, 1);
			i_letter++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
