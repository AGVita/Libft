/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:19:27 by rzarquon          #+#    #+#             */
/*   Updated: 2021/11/08 15:11:21 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] && s[i + 1] == c) \
		|| (s[i] != c && !s[i + 1]))
			count++;
		i++;
	}
	return (count);
}

static int	word_len(const char *s, char c)
{	
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static	char	**free_free(char **spisok)
{
	int	i;

	i = 0;
	while (spisok[i])
	{
		free(spisok[i]);
		i++;
	}
	free(spisok);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{	
	char	**spisok;
	int		i;
	int		word;

	word = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i++] == c)
		word++;
	spisok = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!spisok)
		return (NULL);
	i = -1;
	while (++i < count_words(s, c))
	{
		spisok[i] = ft_substr(s, word, word_len(&s[word], c));
		if (!spisok[i])
			return (free_free(spisok));
		word = word + word_len(&s[word], c);
		while (s[word] == c)
			word++;
	}
	spisok[i] = NULL;
	return (spisok);
}
