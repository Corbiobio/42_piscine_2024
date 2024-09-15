/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_digit.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:13:38 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/18 22:07:09 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VERIF_DIGIT_H
# define VERIF_DIGIT_H

int	verif_digit_in_row(int **map, int x, int y, int digit);
int	verif_digit_in_column(int **map, int x, int y, int digit);
int	is_digit_unique(int **map, int x, int y);

#endif
