/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:03:18 by gdumais-          #+#    #+#             */
/*   Updated: 2024/02/21 11:30:47 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;

	if (s != NULL)
	{
		ptr = s;
		while (*ptr)
		{
			if (*ptr == (unsigned char)c)
			{
				return ((char *)&*ptr);
			}
			ptr++;
		}
		if ((unsigned char)c == '\0')
			return ((char *)&*ptr);
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s", ft_strchr("allo", 'l'));
// }