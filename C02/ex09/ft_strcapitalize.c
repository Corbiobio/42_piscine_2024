/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:11:23 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/11 12:11:25 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_char_is_letter(char c)
{
	if (ft_char_is_lowercase(c) || ft_char_is_uppercase(c))
		return (1);
	return (0);
}

int	ft_char_is_alphanum(char c)
{
	if (ft_char_is_letter(c) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	if (ft_char_is_lowercase(str[0]) && str[0] != '\0')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_char_is_alphanum(str[i - 1]) && ft_char_is_uppercase(str[i]))
			str[i] += 32;
		else if (!ft_char_is_alphanum(str[i - 1]))
			if (ft_char_is_lowercase(str[i]))
				str[i] -= 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	int		test;
// 	char	t[] = "salut, coMMent tU vas ? 42mots quarante-deux;
// 	cinquante+et+un";

// 	ft_strcapitalize(t);
// 	printf("%s", t);
// 	return (0);
// }
