/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapread.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:37:51 by gdumais-          #+#    #+#             */
/*   Updated: 2024/05/01 19:04:49 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_error_message(void)
{
	printf("error reading map");
	exit(1);
}

char	**mapread(char *map)
{
	int		fd;
	char	*line;
	char	*evry_line;

	line = "";
	evry_line = ft_strdup("");
	fd = open(map, O_RDONLY);
	if (fd < 0)
		ft_error_message();
	while (line)
	{
		line = get_next_line(fd);
		if (line == NULL || line[0] == '\n')
			break ;
		evry_line = ft_strjoin(evry_line, line);
		free(line);
	}
	free(line);
	close(fd);
	if (evry_line[0] == '\0')
		ft_error_message();
	return (ft_split(evry_line, '\n'));
}
