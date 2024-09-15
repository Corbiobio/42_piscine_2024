/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:12:47 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/28 14:44:15 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>//malloc
// #include <stdio.h>//printf

int	in_charset(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int		i;
	int		index_word;
	int		find_word;

	i = 0;
	index_word = 0;
	while (*str != '\0')
	{
		find_word = 0;
		while (*str != '\0' && in_charset(*str, charset) == 1)
			str++;
		while (*str != '\0' && in_charset(*str, charset) == 0)
		{
			str++;
			find_word = 1;
		}
		if (find_word == 1)
			index_word++;
	}
	return (index_word);
}

char	*add_word(char **word, int index_word, char *str, char *charset)
{
	int		i;
	int		total_letter;
	int		index_letter;

	i = 0;
	total_letter = 0;
	while (*str != '\0' && in_charset(*str, charset) == 1)
		str++;
	while (str[total_letter] != '\0'
		&& in_charset(str[total_letter], charset) == 0)
		total_letter++;
	word[index_word] = malloc(sizeof(char) * (total_letter + 1));
	if (word[index_word] == NULL)
		return (NULL);
	index_letter = 0;
	while (index_letter < total_letter)
	{
		word[index_word][index_letter] = str[index_letter];
		index_letter++;
	}
	word[index_word][index_letter] = '\0';
	return (str + total_letter);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		total_word;
	int		index_word;

	total_word = count_word(str, charset);
	result = malloc(sizeof(char *) * (total_word + 1));
	if (total_word == 0 || result == NULL)
	{
		result[0] = 0;
		return (result);
	}
	index_word = 0;
	while (index_word < total_word)
	{
		str = add_word(result, index_word, str, charset);
		index_word++;
	}
	result[total_word] = 0;
	return (result);
}

// int	main(void)
// {
// 	char	*str = "  dd  ddd  dd   ";
// 	// char	*str = ",,,,,5464";
// 	// char	*str = "";
// 	char	*charset = "   ";
// 	char	**result = ft_split(str, charset);
// 	int		i = 0;

// 	// printf("%s", result[0]);
// 	while (result[i] != 0)
// 	{
// 		int j = 0;
// 		while (result[i][j] != '\0')
// 		{
// 			j++;
// 		}
// 		printf("%d ", j);
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	return (0);
// }
