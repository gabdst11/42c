/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:03:20 by gdumais-          #+#    #+#             */
/*   Updated: 2024/02/22 14:35:18 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	if (!dst || !src)
		return (0);
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	while ((dstlen + i + 1) < dstsize && srclen > 0 && src[i])
	{
		dst[((dstlen) + i)] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	return (dstlen + srclen);
}

// int main()
// {
// 	char a[] = "bonjour";
// 	char b[] = "allo";
// 	ft_strlcat(a, b, 10);
// 	printf("%s", a);
// }