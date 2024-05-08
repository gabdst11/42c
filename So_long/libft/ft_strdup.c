/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:53:56 by gdumais-          #+#    #+#             */
/*   Updated: 2024/02/29 16:21:00 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
