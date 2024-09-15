/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_key_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 20:46:56 by almeekel          #+#    #+#             */
/*   Updated: 2024/08/25 21:00:27 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"
#include "split_key_value.h"
#include <stdlib.h>

// checks for ";/ " separators
int	checksep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

//returns the length of the number or of the value strings
int	wordlen(char *str, char *charset, int wcnt)
{
	int	i;

	i = 0;
	while (str[i] && wcnt != 1)
	{
		if (checksep(str[i], charset))
			return (i);
		i++;
	}
	while (str[i] && wcnt == 1 && str[i] != '\n')
	{
		i++;
	}
	return (i);
}

//counts the word 1 (key) and 2 (value)
int	countwords(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] && count < 1)
	{
		while (!checksep(str[i], charset))
			i++;
		count++;
	}
	while (str[i] && count < 2)
	{
		if (checksep(str[i], charset))
			i++;
		else
		{
			while (!checksep(str[i], charset))
				i++;
			count++;
		}
	}
	return (count);
}

// splits a line from the dictionnary in two strings
char	**split_key_value(char *str, char *charset)
{
	char	**tab;
	int		wcnt;
	int		len;
	int		i;
	int		j;

	i = 0;
	wcnt = countwords(str, charset);
	tab = malloc(sizeof(char *) * wcnt + 1);
	while (str && i < wcnt)
	{
		j = 0;
		while (checksep(*str, charset) && i != 2)
			str++;
		len = wordlen(str, charset, i);
		tab[i] = malloc(sizeof(char) * len + 1);
		while (j < len)
			tab[i][j++] = *str++;
		tab[i][j] = '\0';
		i++;
	}
	tab[wcnt + 1] = 0;
	return (tab);
}
