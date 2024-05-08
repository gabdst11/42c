/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:45:21 by gdumais-          #+#    #+#             */
/*   Updated: 2024/05/08 17:04:09 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	mapheigh(char **map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (map[y] != NULL)
	{
		x = 0;
		while (map[x] != NULL)
		{
			x++;
		}
		if (map[x] == NULL)
			y++;
	}
	return (y);
}

int	maplenght(char **map)
{
	int		y;
	int		first_line;
	int		other_line;

	y = 1;
	first_line = 0;
	first_line = ft_strlen(map[0]);
	while (map[y] != NULL)
	{
		other_line = ft_strlen(map[y]);
		if (first_line != other_line)
		{
			printf("map is not rectagle");
			exit(1);
		}
		y++;
	}
	if (first_line != 0)
		return (first_line);
	else
	{
		printf("map is not rectagle");
		exit(1);
	}
}

void	mapwall(char **map, int mapheigh, int maplenght)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (map[x][0])
	{
		if (map[x][0] != 1)
		{
			printf("map wall error");
			exit(1);
		}
	}
	while (map[y] != NULL)
}