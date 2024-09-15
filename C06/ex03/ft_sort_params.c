/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:00:08 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/22 14:32:14 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **arg, int index_1, int index_2)
{
	char	*buff;

	buff = arg[index_1];
	arg[index_1] = arg[index_2];
	arg[index_2] = buff;
}

int	ft_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else if (*s2 > *s1 || *s1 == '\0')
		return (-1);
	else if (*s2 < *s1 || *s2 == '\0')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		i_2;

	i = 1;
	while (i < argc - 1)
	{
		i_2 = i;
		while (i_2 < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i_2 + 1]) == 1)
				ft_swap(argv, i, i_2 + 1);
			i_2++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_len(argv[i]));
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
