/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:42:20 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/10 19:42:23 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int		i;
	char	*c;

	i = 0;
	c = str + i;
	while (*c != '\0')
	{
		i++;
		c = str + i;
	}
	return (i + 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		len;
	int		i;

	len = ft_strlen(src);
	i = 0;
	while (i < len && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	c1[] = "asdfe";
// 	char	c2[6];

// 	ft_strcpy(c2,c1);
// 	printf("%s",c2);
// 	return (0);
// }
