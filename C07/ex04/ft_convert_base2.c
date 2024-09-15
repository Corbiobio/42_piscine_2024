/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:49:28 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/26 15:27:42 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	index_in_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	get_base_len(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= '\t' && base[i] <= '\r'))
			return (-1);
		else
		{
			j = i + 1;
			while (base[j] != '\0')
			{
				if (base[j] == base[i])
					return (-1);
				j++;
			}
		}
		i++;
	}
	if (i <= 1)
		return (-1);
	return (i);
}

int	get_str_len(char **str, char *base)
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
	while (index_in_base(*(*str + len), base) != -1)
		len++;
	return (len * is_positive);
}

int	pow_n(int nb, int n)
{
	int		result;
	int		i;

	result = 1;
	i = 0;
	while (i < n)
	{
		result *= nb;
		i++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int		base_len;
	int		str_len;
	int		is_negative;
	int		total;
	int		i;

	base_len = get_base_len(base);
	str_len = get_str_len(&str, base);
	if (base_len == -1 || str_len == 0)
		return (0);
	is_negative = 1;
	if (str_len < 0)
	{
		str_len *= -1;
		is_negative = -1;
	}
	total = 0;
	i = 0;
	while (i < str_len)
	{
		total += index_in_base(str[i], base) * pow_n(base_len, str_len - i - 1);
		i++;
	}
	return (total * is_negative);
}
