/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:58:41 by gdumais-          #+#    #+#             */
/*   Updated: 2024/04/12 13:49:45 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_file(int fd, char *buffer, char *stocage)
{
	ssize_t	byte_read;
	char	*temp;

	byte_read = 1;
	while (byte_read > 0)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read == -1)
			return (free(buffer), NULL);
		else if (byte_read == 0)
			break ;
		buffer[byte_read] = '\0';
		if (!stocage)
			stocage = ft_strdup("");
		temp = stocage;
		stocage = ft_strjoin(temp, buffer);
		free(temp);
		temp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (stocage);
}

static char	*clean_line(char *stocage)
{
	int		i;
	char	*clean_line;

	i = 0;
	while (stocage[i] && stocage[i] != '\n')
		i++;
	if (!stocage[i])
		return (NULL);
	clean_line = ft_substr(stocage, i + 1, ft_strlen(stocage) - i);
	if (!*clean_line)
	{
		free(clean_line);
		clean_line = (NULL);
	}
	stocage[i + 1] = '\0';
	return (clean_line);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	static char	*stocage;

	buffer = (char *)malloc(BUFFER_SIZE + 1 * sizeof(char *));
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(buffer);
		buffer = NULL;
		free(stocage);
		stocage = NULL;
		return (NULL);
	}
	if (!buffer || buffer == NULL)
		return (NULL);
	line = read_file(fd, buffer, stocage);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	stocage = clean_line(line);
	return (line);
}

// int main()
// {
// 	ssize_t	fd;
// 	char	*line;

// 	fd = open("test.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	printf("%s", line);
// 	free(line);
// }

// char	*get_next_line(int fd)
// {
// 	char	*buffer;
// 	size_t	byte_read;

// 	buffer = (char *) malloc(BUFFER_SIZE + 1 * sizeof(char *));
// 	if (!buffer || buffer == NULL)
// 		return (NULL);
// 	byte_read = read(fd, buffer, BUFFER_SIZE);
// 	if (byte_read <= 0)
// 	{
// 		free(buffer);
// 		return (NULL);
// 	}
// 	buffer[byte_read] = '\0';
// 	return (buffer);
// }

// int main()
// {
// 	size_t	fd;
// 	char	*line;

// 	fd = open("test.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	printf("%s", line);
// 	free(line);
// }
