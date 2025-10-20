/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haer-reh <haer-reh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:18:51 by haer-reh          #+#    #+#             */
/*   Updated: 2025/10/16 11:24:27 by haer-reh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

static char	*copy_word(const char *str, int len)
{
	char	*s;
	int		i;

	s = (char *)malloc(sizeof(char) * (len + 1));
	s[len] = '\0';
	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}

char	**ft_split(const char *s, char c)
{
	char	**str_set;
	int		i;
	int		len;

	str_set = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!str_set)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		str_set[i] = copy_word(s, len);
		if (!str_set[i])
			return (NULL);
		s += len;
		i++;
	}
	str_set[i] = NULL;
	return (str_set);
}
