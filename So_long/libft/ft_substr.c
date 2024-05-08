/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:20:25 by gdumais-          #+#    #+#             */
/*   Updated: 2024/03/01 17:52:04 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int main()
// {
// 	char a[] = "allo les gens";
// 	char	*sub = ft_substr("hola", 4294967295, 18446744073709551615);
// 	printf("%s", sub);
// 	free(sub);
// }