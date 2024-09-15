/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:49:30 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/27 09:48:20 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>//printf
#include <stdlib.h>//malloc

int	index_in_base(char c, char *base);
int	get_base_len(char *base);
int	get_str_len(char **str, char *base);
int	pow_n(int nb, int n);
int	ft_atoi_base(char *str, char *base);

int	ft_base_len(char *base)
{
	int		len;
	int		i;

	len = 0;
	while (base[len] != '\0')
	{
		if (base[len] == '-' || base[len] == '+')
			return (0);
		i = len + 1;
		while (base[i] != '\0')
		{
			if (base[i] == base[len])
				return (0);
			i++;
		}
		len++;
	}
	if (len <= 1)
		return (0);
	return (len);
}

char	get_value_from_base(unsigned int nbr, char *base, int base_len)
{
	char			digit_to_print;
	unsigned int	new_base_len;

	new_base_len = base_len;
	digit_to_print = base[nbr % new_base_len];
	return (digit_to_print);
}

int	calc_total_len_str(unsigned int nbr, int base_len)
{
	unsigned int	new_base_len;
	int				len;

	new_base_len = base_len;
	len = 1;
	while (nbr >= new_base_len)
	{
		nbr = nbr / new_base_len;
		len++;
	}
	return (len);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int				base_len;
	unsigned int	new_nbr;
	int				str_len;
	char			*str;

	base_len = ft_base_len(base);
	if (base_len == 0)
		return ("");
	new_nbr = nbr;
	if (nbr < 0)
		new_nbr = nbr * -1;
	str_len = calc_total_len_str(new_nbr, base_len);
	str = malloc(sizeof(char) * str_len + 1);
	str[str_len] = '\0';
	while (str_len > 0)
	{
		str_len--;
		str[str_len] = get_value_from_base(new_nbr, base, base_len);
		new_nbr = new_nbr / base_len;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		result_base_from;
	char	*result_base_to;
	int		i;
	char	*tmp;

	if (get_base_len(base_from) == -1 || get_base_len(base_to) == -1)
		return (NULL);
	result_base_from = ft_atoi_base(nbr, base_from);
	result_base_to = ft_putnbr_base(result_base_from, base_to);
	if (result_base_from < 0)
	{
		i = 0;
		while (result_base_to[i] != '\0')
			i++;
		tmp = malloc(sizeof(char) * (i + 2));
		tmp[0] = '-';
		tmp[i + 1] = '\0';
		while (i > 0)
		{
			tmp[i] = result_base_to[i - 1];
			i--;
		}
		return (tmp);
	}
	return (result_base_to);
}

// int	main(void)
// {
// 	//original 2147483647
// 	char	*hexa = "    +++--+20";
// 	char	*base1 = "0123456789ABCDEF";
// 	char	*base2 = "01";
// 	printf("start : %s\n", hexa);
// 	printf("result : %s", ft_convert_base(hexa, base1, base2));
// 	return (0);
// }
