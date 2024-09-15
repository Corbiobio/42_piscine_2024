/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeekel <almeekel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:12:36 by almeekel          #+#    #+#             */
/*   Updated: 2024/08/25 23:26:48 by almeekel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoa.h"

int	checknumber(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	atoa(char *str)
{
	int	i;

	i = 0;
	if (!(checknumber(str)))
		return (0);
	if (str[0] == 0 && str[1] != '\0')
		return (0);
	return (1);
}
