/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:37:13 by almeekel          #+#    #+#             */
/*   Updated: 2024/08/25 21:06:38 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "search.h"
#include "utilities.h"
#include <stdlib.h>
#include <stdio.h>

// finds the entries correspnding to numbers from 0 to 9
void	search_digits(char c, char ***tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (tab[i][0][0] == c && str_len(tab[i][0]) == 1)
			putstr(tab[i][1]);
		i++;
	}
}

//finds the entries correspnding to numbers from 10 to 19
void	search_teens(char *tn, char ***tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (tab[i][0][0] == tn[0] && tab[i][0][1] == tn[1]
			&& str_len(tab[i][0]) == 2)
			putstr(tab[i][1]);
		i++;
	}
}

// finds the entries corresponding to numbers from 20 to 90
void	search_decades(char c, char ***tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (str_len(tab[i][0]) == 2)
			if (tab[i][0][0] == c && tab[i][0][1] == '0')
				putstr(tab[i][1]);
		i++;
	}
}

// finds the entry correspnding to the hundreds
void	search_hundreds(char ***tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (str_len(tab[i][0]) == 3)
		{
			if (tab[i][0][0] == '1' && tab[i][0][1] == '0'
				&& tab[i][0][2] == '0')
				putstr(tab[i][1]);
		}
		i++;
	}
}

// finds the entry correspnding to numbers higher than 1000
void	search_thousands(int count, char ***tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i] != NULL)
	{
		if (str_len(tab[i][0]) == count)
		{
			j = 1;
			if (tab[i][0][0] != '1')
				return ;
			while (j < count)
			{
				if (tab[i][0][j] != '0')
					return ;
				j++;
			}
			if (j == count)
				putstr(tab[i][1]);
		}
		i++;
	}
}
