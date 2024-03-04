/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:03:33 by gdumais-          #+#    #+#             */
/*   Updated: 2024/02/23 16:19:35 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	int			i;

	if (s != NULL)
	{
		i = ft_strlen(s);
		ptr = s;
		while (*ptr)
			ptr++;
		if (c == '0')
			return ((char *)ptr);
		while (i >= 0)
		{
			if (*ptr == (unsigned char)c)
				return ((char *)ptr);
			ptr--;
			i--;
		}
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s", ft_strrchr("abbbbbb", 'a'));
// }