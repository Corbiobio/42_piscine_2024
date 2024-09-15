/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:55:38 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/11 13:50:45 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > 127)
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int		test;

// 	test = ft_str_is_printable("WDF987 446;'';\\]pWORF1a");
// 	printf("%d", test);
// 	return (0);
// }
