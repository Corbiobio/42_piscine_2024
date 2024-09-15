/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:42:43 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/15 09:36:28 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		else if (s1[i] == '\0')
			return (-99);
		else if (s2[i] == '\0')
			return (99);
		else if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *test1 = "abc";
// 	char *test2 = "ab";
// 	char *test3 = "bc";
// 	char *test4 = "bcd";
// 	int	n = 10;

// 	// =
// 	printf("%d | ", ft_strncmp(test1, test1, n));
// 	printf("%d\n", strncmp(test1, test1, n));

// 	// s2 plus petit
// 	printf("%d | ", ft_strncmp(test1, test2, n));
// 	printf("%d\n", strncmp(test1, test2, n));

// 	// s1 plus petit
// 	printf("%d | ", ft_strncmp(test2, test1, n));
// 	printf("%d\n", strncmp(test2, test1, n));

// 	// s1 < s2
// 	printf("%d | ", ft_strncmp(test1, test4, n));
// 	printf("%d\n", strncmp(test1, test4, n));

// 	// s1 > s2
// 	printf("%d | ", ft_strncmp(test3, test1, n));
// 	printf("%d\n", strncmp(test3, test1, n));
// 	return (0);
// }
