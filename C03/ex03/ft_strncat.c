/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:51:26 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/11 19:51:28 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_str_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_str_len(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char test1[8] = "123";
// 	char test2[4] = "123";
// 	char test3[] = "4567";
// 	int n = 2;

// 	// enougth place
// 	// printf("%s\n", ft_strncat(test1, test3, n));
// 	// printf("%s\n", strncat(test1, test3, n));

// 	// not enougth place
// 	// printf("%s\n", strncat(test2, test3, n));
// 	// printf("%s\n", ft_strncat(test2, test3, n));
//	return (0);
// }
