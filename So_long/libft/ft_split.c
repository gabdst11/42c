/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:32:25 by gdumais-          #+#    #+#             */
/*   Updated: 2024/04/05 10:26:12 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	word_len;
	int		i;

	i = 0;
	str = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !str)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			str[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	str[i] = NULL;
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>

// // Prototype des fonctions ft_split, ft_strchr, ft_strlen et ft_substr
// char	**ft_split(const char *s, char c);
// char	*ft_strchr(const char *s, int c);
// size_t	ft_strlen(const char *s);
// char	*ft_substr(const char *s, unsigned int start, size_t len);

// // int main()
// // {
// //     const char *s = "Bonjour,comment,ca,va\b";
// //     char c = ',';
// //     char **result = ft_split(s, c);

// //     if (result == NULL) {
// //         printf("Erreur lors du fractionnement de la chaîne\n");
// //         return 1;
// //     }

// //     // Affichage des mots séparés
// //     for (int i = 0; result[i] != NULL; i++) {
// //         printf("%s\n", result[i]);
// //     }

// //     // Libération de la mémoire allouée pour chaque mot
// //     for (int i = 0; result[i] != NULL; i++) {
// //         free(result[i]);
// //     }

// //     // Libération de la mémoire allouée pour le tableau de pointeurs
// //     free(result);

// //     return 0;
// // }
