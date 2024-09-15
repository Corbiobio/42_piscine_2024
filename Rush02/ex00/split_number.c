/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 00:59:52 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/25 21:37:44 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "utilities.h"

//copy n byte from src to dest
char	*str_n_cpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

//calc the size of a segment
int	calc_segment_size(int strlen, int i)
{
	if (strlen % 3 != 0 && i == 0)
		return (strlen % 3);
	else
		return (3);
}

//get the len of the arr 
int	arr_len(int strlen)
{
	if (strlen % 3 == 0)
		return (strlen / 3);
	return ((strlen + 2) / 3);
}

//split the nb in segment of 3 (or less if not enouth len)
char	**split_number(char *nb)
{
	char	**arr;
	int		arrlen;
	int		j;
	int		i;
	int		segment_size;

	arrlen = arr_len(str_len(nb));
	arr = malloc(sizeof(char *) * (arrlen + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < arrlen)
	{
		segment_size = calc_segment_size(str_len(nb), i);
		arr[i] = malloc(sizeof(char) * (segment_size + 1));
		if (!arr[i])
			return (NULL);
		str_n_cpy(arr[i], &nb[j], segment_size);
		arr[i][segment_size] = '\0';
		j += segment_size;
		i++;
	}
	arr[arrlen] = NULL;
	return (arr);
}
