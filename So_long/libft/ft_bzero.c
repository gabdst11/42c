/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:02:48 by gdumais-          #+#    #+#             */
/*   Updated: 2024/02/19 16:23:29 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

// int main()
// {
// 	size_t n = 5;
// 	size_t i = 0;
// 	char a[] = "alluiouoo";
// 	printf("%s\n", a);
// 	ft_bzero(a, n);
// 	while (i < n)
// 	{	
// 		printf("%d", a[i]);
// 		i++;
// 	}	
// }
