/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:30:07 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/15 09:35:05 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else if (*s1 == '\0')
		return (-99);
	else if (*s2 == '\0')
		return (99);
	else if (*s2 > *s1)
		return (-1);
	else if (*s2 < *s1)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char *test1 = "abc";
// 	char *test2 = "ab";
// 	char *test3 = "bc";
// 	char *test4 = "bcd";

// 	// =
// 	printf("%d | ", ft_strcmp(test1, test1));
// 	printf("%d\n", strcmp(test1, test1));

// 	// s2 plus petit
// 	printf("%d | ", ft_strcmp(test1, test2));
// 	printf("%d\n", strcmp(test1, test2));

// 	// s1 plus petit
// 	printf("%d | ", ft_strcmp(test2, test1));
// 	printf("%d\n", strcmp(test2, test1));

// 	// s1 < s2
// 	printf("%d | ", ft_strcmp(test1, test4));
// 	printf("%d\n", strcmp(test1, test4));

// 	// s1 > s2
// 	printf("%d | ", ft_strcmp(test3, test1));
// 	printf("%d\n", strcmp(test3, test1));

// 	return (0);
// }
