/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:59:01 by gdumais-          #+#    #+#             */
/*   Updated: 2024/04/10 17:59:35 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;

	if (s != NULL)
	{
		ptr = s;
		while (*ptr)
		{
			if (*ptr == (unsigned char)c)
			{
				return ((char *)&*ptr);
			}
			ptr++;
		}
		if ((unsigned char)c == '\0')
			return ((char *)&*ptr);
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

size_t	ft_strlen(const char *s)
{
	size_t	a;

	a = 0;
	if (!s[a])
		return (0);
	while (s[a] != '\0')
		a++;
	return (a);
}

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dst;
	size_t	b;

	b = 0;
	if (s1 != NULL)
	{
		i = ft_strlen(s1);
		dst = (char *)malloc(sizeof(char) * (i + 1));
		if (!dst)
			return (NULL);
		while (s1[b])
		{
			dst[b] = s1[b];
			b++;
		}
		dst[b] = '\0';
		return (dst);
	}
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*newstring;

	a = 0;
	newstring = NULL;
	if (s != NULL)
	{
		if (start > ft_strlen(s))
			start = ft_strlen(s);
		if (len > ft_strlen(s + start))
			len = ft_strlen(s + start);
		newstring = (char *)malloc(len + 1);
		if (!newstring)
			return (NULL);
		while ((size_t)len > a)
		{
			newstring[a] = s[start + a];
			a++;
		}
		newstring[a] = '\0';
		return (newstring);
	}
	return (NULL);
}
