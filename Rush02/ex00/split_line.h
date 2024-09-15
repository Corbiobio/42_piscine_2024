/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_line.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeekel <almeekel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:54:13 by almeekel          #+#    #+#             */
/*   Updated: 2024/08/25 17:09:05 by almeekel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPLIT_LINE_H
# define SPLIT_LINE_H

char	**split_line(char *str);
int		count_line(char *str);
int		check_line(char c);

#endif