/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:03:15 by gdumais-          #+#    #+#             */
/*   Updated: 2024/02/19 12:58:51 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ac;
	unsigned char	*ab;
	size_t			i;

	ab = b;
	i = 0;
	ac = (unsigned char)c;
	if (!b)
		return (NULL);
	while (i < len)
	{
		ab[i] = ac;
		i++;
	}
	return (ab);
}

// int main()
// {
// 	char array[0];
//  	ft_memset(array, 0, sizeof(array));
// 	printf("%d", array[3]); 
// 	return (0);
// }
