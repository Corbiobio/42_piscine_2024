/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeekel <almeekel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:35:27 by almeekel          #+#    #+#             */
/*   Updated: 2024/08/25 19:57:06 by paubello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "split_line.h"
#include <stdlib.h>
#include <stdio.h>

//returns the length of the line
int	line_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

//counts the amount of lines in the dictionary
int	count_line(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			i++;
		else
		{
			while (str[i] != '\n')
				i++;
			count++;
		}
	}
	return (count);
}

// splits the dictionnary into lines
char	**split_line(char *str)
{
	char	**tab;
	int		wcnt;
	int		len;
	int		i;
	int		j;

	i = 0;
	wcnt = count_line(str);
	tab = malloc(sizeof(char *) * wcnt + 1);
	while (*str != '\0' && i < wcnt)
	{
		j = 0;
		if (*str == '\n')
			str++;
		len = line_len(str);
		tab[i] = malloc(sizeof(char) * len + 1);
		while (j < len)
			tab[i][j++] = *str++;
		tab[i][j] = '\0';
		i++;
	}
	tab[wcnt + 1] = NULL;
	return (tab);
}
