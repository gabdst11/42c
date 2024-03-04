/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:03:13 by gdumais-          #+#    #+#             */
/*   Updated: 2024/02/27 11:31:15 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;		
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (!src || !dst)
		return (0);
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}

// int main(void)
// {
// 	char a[] = "allo";
// 	char b[] = "yoyo";
// 	printf("%s", ft_memmove(a, b, 8));
// }