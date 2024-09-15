/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_key_value.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeekel <almeekel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:25:02 by almeekel          #+#    #+#             */
/*   Updated: 2024/08/25 14:25:13 by almeekel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPLIT_KEY_VALUE_H
# define SPLIT_KEY_VALUE_H

char	**split_key_value(char *str, char *charset);
int		countwords(char *str, char *charset);
int		wordlen(char *str, char *charset, int wcnt);
int		checksep(char c, char *charset);

#endif