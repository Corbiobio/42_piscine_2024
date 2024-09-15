/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:16:32 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/27 17:21:56 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// #include <stdio.h>

unsigned int	str_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	src_index;

	src_len = str_len(src);
	dest_len = str_len(dest);
	src_index = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (src_index < src_len && src_index + dest_len + 1 < size)
	{
		dest[dest_len + src_index] = src[src_index];
		src_index++;
	}
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	char test1[] = "q";
// 	char test2[] = "q";
// 	unsigned int size1 = 3;
// 	size_t size2 = 3;

// 	// -lbsd
// 	printf("%u ", ft_strlcat(test1, "A",size1));
// 	printf("%s\n", test1);
// 	printf("%zu ", strlcat(test2, "A",size2));
// 	printf("%s\n", test2);

// 	return (0);
// }
