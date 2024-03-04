/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:23:18 by gdumais-          #+#    #+#             */
/*   Updated: 2024/02/27 17:12:39 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count(long int a)
{
	size_t	i;

	if (a == 0)
		return (1);
	i = 0;
	if (a < 0)
	{
		i += 1;
		a *= -1;
	}
	while (a > 0)
	{
		a /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	size_t		i;
	long int	b;

	b = (long int)n;
	i = count(b);
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	if (b < 0)
	{
		ptr[0] = '-';
		b = -b;
	}
	if (b == 0)
		ptr[0] = '0';
	while (b > 0)
	{
		ptr[--i] = b % 10 + '0';
		b /= 10;
	}
	return (ptr);
}

// int main(void)
// {
// 	int num = -12345;
// 	char *str = ft_itoa(num);

// 	printf("Integer: %d\n", num);
// 	printf("String: %s\n", str);

// 	free(str);

// 	return 0;
// }