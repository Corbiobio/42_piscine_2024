/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_number.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeekel <almeekel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:52:16 by almeekel          #+#    #+#             */
/*   Updated: 2024/08/25 14:25:46 by almeekel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPLIT_NUMBER_H
# define SPLIT_NUMBER_H

char	*str_n_cpy(char *dest, char *src, int n);
int		calc_segment_size(int strlen, int i);
int		arr_len(int strlen);
char	**split_number(char *nb);

#endif
