/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:45:21 by gdumais-          #+#    #+#             */
/*   Updated: 2024/05/17 16:09:46 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	mapheigh(char **map)
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

static int	maplenght(char **map)
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
			printf("map is not rectagle\n");
			exit(1);
		}
		y++;
	}
	if (first_line != 0)
		return (first_line);
	else
	{
		printf("map is not rectagle\n");
		exit(1);
	}
}

static int	mapwall(char **map, int mapheigh, int maplenght)
{
	int	x;
	int	y;
	int	h;
	int	l;

	h = mapheigh;
	l = maplenght;
	x = 0;
	y = 0;
	while (x != l)
	{
		if (map[0][x] != '1' || map[h - 1][x] != '1')
			return (1);
		x++;
	}
	while (y != h)
	{
		if (map[y][0] != '1' || map[y][l - 1] != '1')
			return (2);
		y++;
	}
	return (0);
}

static int	checkcontent(char **map, t_content *s)
{
	while (map[s->y] != NULL)
	{
		s->x = 0;
		while (map[s->y][s->x])
		{
			if (map[s->y][s->x] == 'C')
				s->c++;
			if (map[s->y][s->x] == 'E')
				s->e++;
			if (map[s->y][s->x] == 'P')
				s->p++;
			s->x++;
		}
		s->y++;
	}
	if (s->c < 1 || s->e != 1 || s->p != 1)
		return (1);
	return (0);
}

void	mapcheck(char **map)
{
	int			height;
	int			lenght;
	t_content	s;

	ft_bzero(&s, sizeof(t_content));
	height = mapheigh(map);
	lenght = maplenght(map);
	if (mapwall(map, height, lenght) == 1)
	{
		printf("map wall error vertical\n");
		exit(1);
	}
	if (mapwall(map, height, lenght) == 2)
	{
		printf("map wall error horizontal\n");
		exit(1);
	}
	if (checkcontent(map, &s) == 1)
	{
		printf("map wall error content\n");
		exit(1);
	}
	return ;
}
