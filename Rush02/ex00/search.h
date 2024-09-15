/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeekel <almeekel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:45:41 by almeekel          #+#    #+#             */
/*   Updated: 2024/08/25 20:22:49 by almeekel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEARCH_H
# define SEARCH_H

void	search_digits(char c, char ***tab);
void	search_teens(char *tn, char ***tab);
void	search_decades(char c, char ***tab);
void	search_hundreds(char ***tab);
void	search_thousands(int count, char ***tab);

#endif