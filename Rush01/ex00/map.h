/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edarnand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:56:29 by edarnand          #+#    #+#             */
/*   Updated: 2024/08/18 22:59:33 by edarnand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

int		**build_map(void);
void	display_map(int **map);
void	map_is_found(int **map, char *str);
void	update_map(int **map, int x, int y, char *str);

#endif
