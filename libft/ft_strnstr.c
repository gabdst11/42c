/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:03:30 by gdumais-          #+#    #+#             */
/*   Updated: 2024/02/23 18:07:55 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (!needle || !haystack)
		return (NULL);
	while (haystack[a] && a < len)
	{
		b = 0;
		while (haystack[a] && needle[b] == haystack[a] && (a < len))
		{
			a++;
			b++;
		}
		if (needle[b] == '\0')
			return ((char *)&haystack[(a - b)]);
		a = (a - b) + 1;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *haystack = "lo FF lo FF lo";
//     const char *needle = "";
//     size_t len = 0;

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