/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeekel <almeekel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:48:19 by paubello          #+#    #+#             */
/*   Updated: 2024/08/25 23:32:10 by almeekel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "split_line.h"
#include "split_key_value.h"

int	dict_len(char *path)
{
	int		fd;
	int		bytes_nb;
	char	c;

	bytes_nb = 0;
	fd = open(path, 00);
	if (fd == -1)
	{
		write(1, "Error Opening File!\n", 20);
		return (-1);
	}
	while (read(fd, &c, sizeof(c)) > 0)
		bytes_nb++;
	close(fd);
	return (bytes_nb);
}

char	*get_file_content(char *path)
{
	int		fd;
	int		i;
	char	c;
	char	*buf;

	fd = open(path, 00);
	if (fd == -1)
	{
		write(2, "Dict Error\n", 11);
		exit(1);
	}
	buf = malloc(sizeof(char) * dict_len(path) + 1);
	i = 0;
	while (read(fd, &c, 1))
	{
		buf[i] = c;
		i++;
	}
	return (buf);
}

char	***parse_dict(char *path)
{
	char	*str;
	int		i;
	char	***tab;
	char	**lt;

	str = get_file_content(path);
	lt = malloc(sizeof(char *) * count_line(str) + 1);
	tab = malloc(sizeof(char **) * count_line(str) + 1);
	lt = split_line(str);
	i = 0;
	while (i < count_line(str))
	{
		tab[i] = malloc(sizeof(char *) * 3);
		if (tab[i] == NULL)
		{
			free(tab[i]);
			return (0);
		}
		tab[i] = split_key_value(lt[i], " :\n");
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
