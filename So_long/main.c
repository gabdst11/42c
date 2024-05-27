/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:57:58 by gdumais-          #+#    #+#             */
/*   Updated: 2024/05/27 13:06:11 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	char	**map;
	int		y;

	y = 0;
	if (argc != 2)
		return (printf("not enough arguments\n"));
	map = mapread(argv[1]);
	mapcheck(map);
	game_is_winnable(map);
	while (map[y])
	{
		printf("%s\n", map[y]);
		y++;
	}
	// other_content(map);
}
