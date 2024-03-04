/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:58:51 by gdumais-          #+#    #+#             */
/*   Updated: 2024/02/26 16:31:47 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*b;

	i = 0;
	if (!s || !f)
		return (NULL);
	b = ft_strdup(s);
	if (!b)
		return (NULL);
	while (b[i])
	{
		b[i] = f(i, b[i]);
		i++;
	}
	return (b);
}
