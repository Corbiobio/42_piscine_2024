/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   params.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:44:33 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/18 22:04:35 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"

//verif if str is in the good format
int	count_word(char *str)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0 && str[i] >= '0' && str[i] <= '9')
			count++;
		else if (i % 2 == 0 && (str[i] < '0' || str[i] > '9'))
			return (-1);
		else if (i % 2 != 0 && str[i] != ' ')
			return (-1);
		i++;
	}
	return (count);
}

//verif arg count and argc[1] format
int	verif_params(int argc, char **argv)
{
	if (argc != 2 || count_word(argv[1]) / 4 != MAP_LEN)
		return (0);
	return (1);
}
