/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:45:36 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/11 11:45:38 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_lowercase(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	int		test;
// 	char	t[] = "abVc";

// 	ft_strupcase(t);

// 	printf("%s", t);
// 	return (0);
// }
