/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 09:46:13 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/25 22:23:11 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>//write
#include "utilities.h"
#include "search.h"
#include "dict.h"

void	print_digit(char *nb, int *been_print, char ***tab)
{
	*been_print = 1;
	search_digits(*nb, tab);
	write(1, " ", 1);
}

void	print_dec(char *nb, int *been_print, char ***tab)
{
	*been_print = 1;
	if (nb[0] == '1')
	{
		search_teens(nb, tab);
		write(1, " ", 1);
	}
	else if (nb[0] >= '2')
	{
		search_decades(*nb, tab);
		write(1, " ", 1);
	}
	if (nb[0] != '1' && nb[1] >= '1')
		print_digit(nb + 1, been_print, tab);
}

void	print_hun(char *nb, int *been_print, char ***tab)
{
	*been_print = 1;
	search_digits(*nb, tab);
	write(1, " ", 1);
	search_hundreds(tab);
	write(1, " ", 1);
	print_dec(nb + 1, been_print, tab);
}

void	print_segment(int index_arr, char ***tab)
{
	int		segment_len;

	index_arr -= 1;
	segment_len = (index_arr * 3) + 1;
	if (segment_len >= 4)
	{
		search_thousands(segment_len, tab);
		write(1, " ", 1);
	}
}

void	print_num(char *arr[], int arrlen, char ***tab)
{
	int		strlen;
	int		i;
	int		been_print;

	i = 0;
	while (0 < arrlen)
	{
		strlen = str_len(arr[i]);
		been_print = 0;
		if (strlen == 1)
			print_digit(arr[i], &been_print, tab);
		else if (strlen == 2)
			print_dec(arr[i], &been_print, tab);
		else if (arr[i][0] != '0')
			print_hun(arr[i], &been_print, tab);
		else if (arr[i][1] != '0')
			print_dec(arr[i] + 1, &been_print, tab);
		else if (arr[i][2] != '0')
			print_digit(arr[i] + 2, &been_print, tab);
		if (been_print)
			print_segment(arrlen, tab);
		i++;
		arrlen--;
	}
	write(1, "\n", 1);
}

// int	main(void)
// {
// 	char	*arr[] = {"13", "300", "330", "333", "303", "030", "003", "000"};
// 	// char	*arr[] = {"11", "000"};
// 	int		nb = tabcount("333300330333303030003000");
// 	char	***tab = parse_dict("numbers.dict");

// 	print_num(arr, nb, tab);
// 	return (0);
// }
