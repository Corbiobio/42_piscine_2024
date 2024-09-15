/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:12:49 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/27 09:54:15 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //malloc
// #include <stdio.h>//printf

int	str_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	calc_total_len(int size, char **strs)
{
	int		i;
	int		total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += str_len(strs[i]);
		i++;
	}
	return (total);
}

char	*str_cat(char *dest, char *src)
{
	int		dest_len;
	int		i;

	dest_len = str_len(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_len;
	int		total_len;
	char	*str_joined;
	int		i;

	if (size <= 0)
	{
		str_joined = malloc(sizeof(char) * 1);
		str_joined[0] = '\0';
		return (str_joined);
	}
	sep_len = str_len(sep);
	total_len = calc_total_len(size, strs) + ((size - 1) * sep_len);
	str_joined = malloc(sizeof(char) * (total_len + 1));
	str_joined[0] = '\0';
	i = 0;
	while (i < size)
	{
		str_cat(str_joined, strs[i]);
		if (i != size - 1)
			str_cat(str_joined, sep);
		i++;
	}
	str_joined[total_len] = '\0';
	return (str_joined);
}

// int	main(void)
// {
// 	char	*str[] =
// 	{
// 		"lol",
// 		"lol",
// 		"",
// 		"youpiiii",
// 	};

// 	printf("%s\n", ft_strjoin(2, str, "__"));
// 	// printf("%d", str_len(ft_strjoin(2, str, "1234")));
// 	return (0);
// }
