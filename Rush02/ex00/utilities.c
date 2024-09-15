/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:08:10 by almeekel          #+#    #+#             */
/*   Updated: 2024/08/25 21:07:55 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utilities.h"

//returns the length of a string including the last terminating byte
int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//checks wether a given character is a number
int	is_nb(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

//returns the length of the string entered as argument 
int	nb_len(char *str)
{
	int	len;

	len = 0;
	while (is_nb(str[len]))
		len++;
	return (len);
}

//returns the amount of strings contained in the string entered in split.c
int	tabcount(char *str)
{
	int	tabc;

	if (nb_len(str) % 3 == 0)
		tabc = nb_len(str) / 3;
	else
	{
		tabc = nb_len(str) / 3 + 1;
	}
	return (tabc);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}
