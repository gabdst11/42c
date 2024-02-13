/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:03:30 by gdumais-          #+#    #+#             */
/*   Updated: 2024/02/13 14:29:48 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <xlocale.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (!needle)
		return (NULL);
	while (haystack[a] && a < len)
	{
		b = 0;
		while (needle[b] == haystack[a] && a < len)
		{
			a++;
			b++;
		}
		if (!needle[b])
			return ((char *)&haystack[(a - b)]);
		printf("avant le a++%zu\n", a);
		a = (a - b) + 1;
		printf("apres le a++%zu\n", a);
	}
	return (NULL);
}
