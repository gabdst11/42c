/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:03:02 by gdumais-          #+#    #+#             */
/*   Updated: 2024/02/19 17:26:07 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*test;
	size_t	i;

	i = 0;
	test = (char *)s;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if ((unsigned char)c == ((unsigned char *)s)[i])
			return (test);
		test++;
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char a[] = "loal";
// 	printf("%s", ft_memchr(a, 'a', 4));
// }