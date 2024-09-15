/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:10:02 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/29 09:42:42 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

# define SUCCESS 1
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(nbr) (nbr % 2 == 0)

#endif

// #include "ft_boolean.h"

// void	ft_putstr(char *str)
// {
// 	while (*str)
// 		write(1, str++, 1);
// }

// t_bool	ft_is_even(int nbr)
// {
// 	return ((EVEN(nbr)) ? TRUE : FALSE);
// }

// int	main(int argc, char **argv)
// {
// 	(void)argv;
// 	if (ft_is_even(argc - 1) == TRUE)
// 		ft_putstr(EVEN_MSG);
// 	else
// 		ft_putstr(ODD_MSG);
// 	return (SUCCESS);
// }
