/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:00:03 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/27 17:22:12 by edarnand         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int		len_find;
	int		index_find;

	len_find = ft_str_len(to_find);
	if (len_find == 0)
		return (str);
	while (*str != '\0')
	{
		if (*str == to_find[0])
		{
			index_find = 1;
			while (str[index_find] == to_find[index_find]
				&& to_find[index_find] != '\0' && str[index_find] != '\0')
			{
				index_find++;
			}
			if (index_find == len_find)
				return (str);
		}
		str++;
	}
	return (0);
}

// int	main(void)
// {
// 	char test1[] = "ab";

// 	// in
// 	printf("%s\n", ft_strstr(test1, "1234"));
// 	printf("%s\n", strstr(test1, "1234"));

// 	// not in
// 	printf("%s\n", ft_strstr(test1, "12345"));
// 	printf("%s\n", strstr(test1, "12345"));

// 	// not in
// 	printf("%s\n", ft_strstr(test1, "dsdfdf"));
// 	printf("%s\n", strstr(test1, "vcbxcbv"));

// 	// nothing
// 	printf("%s\n", ft_strstr(test1, ""));
// 	printf("%s\n", strstr(test1, ""));	

// 	// nothing
// 	printf("%s\n", ft_strstr(test1, "a"));
// 	printf("%s\n", strstr(test1, "a"));
// 	return (0);
// }
