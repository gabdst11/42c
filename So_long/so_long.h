/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:38:55 by gdumais-          #+#    #+#             */
/*   Updated: 2024/05/27 12:12:26 by gdumais-         ###   ########.fr       */
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

typedef struct s_content
{
	int		c;
	int		e;
	int		p;
	int		x;
	int		y;
}	t_content;

typedef struct s_dimension
{
	int		lenght;
	int		height;
}	t_dimension;

char	**mapread(char *map);
void	mapcheck(char **map);
void	game_is_winnable(char **map);
void	other_content(char **map);

#endif