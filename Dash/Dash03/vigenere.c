/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vigenere.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:15:40 by fmartore          #+#    #+#             */
/*   Updated: 2024/08/22 17:43:51 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <malloc.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*repeat_key(const char *key, int len)
{
	int		i;
	char	*result;

	i = 0;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = key[i % ft_strlen(key)];
		i++;
	}
	return (result);
}

char	*free_all(char *a, char *b, char *c, char *d)
{
	if (a)
		free(a);
	if (b)
		free(b);
	if (c)
		free(c);
	if (d)
		free(d);
	return (NULL);
}

char	*vigenere(const char *text, const char *key)
{
	char	*result;
	char	*re_key;
	char	alphabet[27];
	int		i;

	i = -1;
	while (++i < 26)
		alphabet[i] = 'a' + i;
	alphabet[i] = '\0';
	result = malloc((ft_strlen(text) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	re_key = repeat_key(key, ft_strlen(text));
	if (!re_key)
		return (free_all(result, NULL, NULL, NULL));
	while (text[i])
	{
		if (!('a' <= text[i] && 'z' >= text[i]))
			return (free_all(re_key, result, NULL, NULL));
		result[i] = alphabet[((re_key[i] - 'a') + (text[i] - 'a')) % 26];
		i++;
	}
	free(re_key);
	return (result);
}

// int	print_error(char *c)
// {
// 	if (c)
// 		free(c);
// 	write(2, "Error\n", 6);
// 	return (1);
// }

// void	ft_putstr(char *str)
// {
// 	int	i;

// 	i = -1;
// 	while (str[++i])
// 		write(1, &str[i], 1);
// }

// int	main(int argc, char **argv)
// {
// 	int		fd;
// 	int		size;
// 	char	*c;
// 	char	*result;

// 	c = malloc(4097 * sizeof(char));
// 	if (!c)
// 		return (print_error(NULL));
// 	if (argc != 2)
// 		return (print_error(c));
// 	fd = open(argv[1], O_RDONLY);
// 	if (fd < 0)
// 		return (print_error(c));
// 	size = read(fd, c, 4096);
// 	c[size] = 0;
// 	result = vigenere(c, "edarnand");
// 	if (!result)
// 		return (print_error(c));
// 	ft_putstr(result);
// 	close(fd);
// 	free(c);
// 	free(result);
// }
