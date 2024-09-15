/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:41:12 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/28 14:27:43 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ((Value < 0) * -1 * Value) + (Value > 0) * Value

#endif

// #include "ft_abs.h"
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ABS(-8));
// }