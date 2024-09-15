/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:45:09 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/15 15:47:45 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// #include <stdio.h>

unsigned int	ft_str_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i_total;

	src_len = ft_str_len(src);
	if (size > 0)
	{
		i_total = 0 ;
		while (i_total < size - 1)
		{
			dest[i_total] = src[i_total];
			i_total++;
		}
		dest[i_total] = '\0';
	}
	return (src_len);
}

// int	main(void)
// {
// 	char test1[] = "0123456789";
// 	char test2[] = "0123456789";
// 	unsigned int n = 10; 
// 	size_t n1 = 10;

// 	// -lbsd
// 	printf("%u ", ft_strlcpy(test1, "abcd", n));
// 	printf("%s\n", test1);

// 	printf("%zu ", strlcpy(test2, "abcd",n1));
// 	printf("%s\n", test2);

// 	return (0);
// }
