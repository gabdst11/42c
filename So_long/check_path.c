/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:04:10 by gdumais-          #+#    #+#             */
/*   Updated: 2024/05/27 11:46:01 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	write_error(char *str)
{
	printf("%s", str);
	exit (1);
}

void	check_path(char **othermap, int px, int py, t_dimension *d)
{
	if (othermap[py][px] == 'X' || othermap[py][px] == '1')
		return ;
	else if (othermap[py][px] == 'C')
		othermap[py][px] = 'X';
	else if (othermap[py][px] == 'E')
		othermap[py][px] = 'X';
	else if (othermap[py][px] == '0')
		othermap[py][px] = 'X';
	check_path(othermap, px + 1, py, d);
	check_path(othermap, px - 1, py, d);
	check_path(othermap, px, py - 1, d);
	check_path(othermap, px, py + 1, d);
}

void	find_path(char **othermap, int px, int py)
{
	t_dimension	d;

	ft_bzero(&d, sizeof(t_dimension));
	check_path(othermap, px, py, &d);
}

void	found_player(char **othermap, int px, int py)
{
	py = 0;
	while (othermap[py])
	{
		px = 0;
		while (othermap[py][px])
		{
			if (othermap[py][px] == 'P')
				find_path(othermap, px, py);
			px++;
		}
		py++;
	}
}

void	game_is_winnable(char **map)
{
	int		px;
	int		py;
	int		x;
	int		y;
	char	**othermap;

	othermap = map;
	px = 0;
	py = 0;
	x = 0;
	y = 0;
	found_player(othermap, px, py);
	while (othermap[y] != NULL)
	{
		x = 0;
		while (othermap[y][x])
		{
			if (othermap[y][x] == 'C' || othermap[y][x] == 'E')
				write_error("No way to win the game!!!");
			x++;
		}
		y++;
	}
}
