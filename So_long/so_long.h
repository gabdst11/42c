/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:38:55 by gdumais-          #+#    #+#             */
/*   Updated: 2024/05/08 16:34:38 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define FALSE 1
# define TRUE 0
# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct game
{
	int		i;
	char	*a;
}	t_game;

char	**mapread(char *map);
int		mapheigh(char **map);
int		maplenght(char **map);
void	mapwall(char **map);

#endif