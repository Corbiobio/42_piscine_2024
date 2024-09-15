/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:26:02 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/15 09:39:05 by edarnand         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int		dest_len;
	int		i;

	dest_len = ft_str_len(dest);
	i = 0;
	while (src[i] != '\0')
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

// 	// enougth place
// 	printf("%s\n", ft_strcat(test1, test3));
// 	printf("%s\n", strcat(test1, test3));

// 	// not enougth place
// 	// printf("%s\n", strcat(test2, test3));
// 	// printf("%s\n", ft_strcat(test2, test3));
// 	return (0);
// }
