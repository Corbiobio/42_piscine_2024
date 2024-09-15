/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:03:19 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/11 12:03:21 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_uppercase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	int		test;
// 	char	t[] = "AQQqfsd>?/,/Vc";

// 	ft_strlowcase(t);

// 	printf("%s", t);
// 	return (0);
// }