/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:17:38 by paubello          #+#    #+#             */
/*   Updated: 2024/08/25 23:18:14 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "dict.h"

int	check_dict(char *path)
{
	char	*str;
	int		i;

	str = get_file_content(path);
	i = 0;
	while (str[i])
	{
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		while (str[i] == ' ')
			i++;
		if (str[i] != ':')
		{
			write(1, "Dict Error\n", 11);
			free(str);
			return (0);
		}
		while (str[i] != '\n')
			i++;
		i++;
	}
	free(str);
	return (1);
}
