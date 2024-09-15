/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeekel <almeekel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:19:29 by almeekel          #+#    #+#             */
/*   Updated: 2024/08/25 23:31:52 by almeekel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "search.h"
#include "split_line.h"
#include "print_num.h"
#include "utilities.h"
#include "split_number.h"
#include <stdlib.h>
#include <unistd.h>
#include "check_dict.h"
#include "atoa.h"

/*void	free_malloc(char ***tab, char **sortinput)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			free (tab[i][j]);
			j++;
		}
		free (tab[i]);
		i++;
	}
	free (tab);
	i = 0;
	while (sortinput[i])
	{
		free (sortinput[i]);
		i++;
	}
	free (sortinput);
}*/
//	malloc attempt caused error pop-up : free_malloc(tab, sortedinput);

int	init(char *dict, char *argv)
{
	char	***tab;
	int		counttab;
	char	**sortedinput;

	if (str_len(argv) > 39 || atoa(argv) != 1)
	{
		write (2, "Error", 1);
		return (0);
	}
	if (!check_dict(dict))
		return (0);
	tab = parse_dict(dict);
	counttab = tabcount(argv);
	sortedinput = split_number(argv);
	print_num(sortedinput, counttab, tab);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		init("numbers.dict", argv[1]);
	}
	else if (argc == 3)
	{
		init(argv[1], argv[2]);
	}
	else
	{
		write(2, "Error\n", 6);
	}
	return (0);
}
