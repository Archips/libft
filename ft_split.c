/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <athirion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:24:45 by athirion          #+#    #+#             */
/*   Updated: 2021/11/25 14:11:21 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i ++;
			words ++;
		}
		while (s[i] && s[i] == c)
			i ++;
	}
	return (words);
}

static char	*ft_malloc_word(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i ++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (word)
	{
		i = 0;
		while (s[i] && s[i] != c)
		{
			word[i] = s[i];
			i ++;
		}
		word[i] = '\0';
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**tab;

	i = 0;
	words = ft_count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (tab)
	{
		while (*s)
		{
			if (*s != c)
			{	
				tab[i] = ft_malloc_word(s, c);
				i ++;
				while (*s && *s != c)
					s++;
			}	
			while (*s && *s == c)
				s++;
		}
	}		
	tab[i] = 0;
	return (tab);
}
