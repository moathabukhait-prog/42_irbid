/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabukhai <mabukhai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:50:18 by mabukhai          #+#    #+#             */
/*   Updated: 2026/09/23 09:16:52 by mabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && is_sep(*s, c))
			s++;
		if (*s)
			count++;
		while (*s && !is_sep(*s, c))
			s++;
	}
	return (count);
}

static char	*copy_word(char const *s, char c)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (s[len] && !is_sep(s[len], c))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**fill_words(char **res, char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && is_sep(*s, c))
			s++;
		if (*s)
		{
			res [i] = copy_word(s, c);
			if (!res[i])
			{
				while (i > 0)
					free (res[--i]);
				free(res);
				return (NULL);
			}
			i++;
			while (*s && !is_sep(*s, c))
				s++;
		}
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		word;

	if (!s)
		return (NULL);
	word = count_words(s, c);
	res = malloc(sizeof(char *) * (word + 1));
	if (!res)
		return (NULL);
	return (fill_words(res, s, c));
}
