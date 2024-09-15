/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:34:21 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/19 19:29:00 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_len_atoi(char **str)
{
	int		len;
	int		is_positive;

	len = 0;
	is_positive = 1;
	while ((**str >= '\a' && **str <= '\r') || **str == ' ')
		*str += 1;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			is_positive *= -1;
		*str += 1;
	}
	while (*(*str + len) >= '0' && *(*str + len) <= '9')
		len++;
	return (len * is_positive);
}

int	ft_pow(int nb, int n)
{
	while (n > 0)
	{
		nb *= 10;
		n--;
	}
	return (nb);
}

int	ft_atoi(char *str)
{
	int				len;
	int				i;
	int				is_positive;
	unsigned int	total;

	len = ft_len_atoi(&str);
	i = 0;
	is_positive = 1;
	total = 0;
	if (len < 0)
	{
		len *= -1;
		is_positive = -1;
	}
	while (i < len)
	{
		total += ft_pow(str[len - i - 1] - '0', i);
		i++;
	}
	return ((int)total * is_positive);
}

// int	main(void)
// {
// 	char	*test = " ++++--+++---2147483648";
// 	printf("%d", ft_atoi(test));
// 	return (0);
// }
