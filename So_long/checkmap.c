/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:45:21 by gdumais-          #+#    #+#             */
/*   Updated: 2024/05/27 11:43:13 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	mapheigh(char **map, t_dimension *d)
{
	int	x;

	x = 0;
	d->height = 0;
	while (map[d->height] != NULL)
	{
		x = 0;
		while (map[d->height][x])
		{
			x++;
		}
		if (map[x] == NULL)
			d->height++;
	}
	return (d->height);
}

static int	maplenght(char **map, t_dimension *d)
{
	int		y;
	int		other_line;

	y = 0;
	d ->lenght = 0;
	d ->lenght = ft_strlen(map[0]);
	while (map[y] != NULL)
	{
		other_line = ft_strlen(map[y]);
		if (d ->lenght != other_line)
		{
			printf("map is not rectagle\n");
			exit(1);
		}
		y++;
	}
	if (d ->lenght != 0)
		return (d ->lenght);
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

static int	checkcontent(char **map, t_content *o)
{
	while (map[o->y] != NULL)
	{
		o->x = 0;
		while (map[o->y][o->x])
		{
			if (map[o->y][o->x] == 'C')
				o->c++;
			if (map[o->y][o->x] == 'E')
				o->e++;
			if (map[o->y][o->x] == 'P')
				o->p++;
			o->x++;
		}
		o->y++;
	}
	if (o->c < 1 || o->e != 1 || o->p != 1)
		return (1);
	return (0);
}

void	mapcheck(char **map)
{
	int			height;
	int			lenght;
	t_content	o;
	t_dimension	d;

	ft_bzero(&d, sizeof(t_dimension));
	ft_bzero(&o, sizeof(t_content));
	height = mapheigh(map, &d);
	lenght = maplenght(map, &d);
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
	if (checkcontent(map, &o) == 1)
	{
		printf("map wall error content\n");
		exit(1);
	}
	return ;
}
