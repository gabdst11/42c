/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:03:30 by gdumais-          #+#    #+#             */
/*   Updated: 2024/02/19 17:54:30 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (!needle || !haystack)
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
		a = (a - b) + 1;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *haystack = "allo";
//     const char *needle = "lo";
//     size_t len = 70;

//     char *result = ft_strnstr(haystack, needle, len);

//     if (result)
//     {
//         printf("Needle found at index: %ld\n", result - haystack);
//     }
//     else
//     {
//         printf("Needle not found.\n");
//     }

//     return 0;
// }