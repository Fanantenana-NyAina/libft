/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fananrak <fananrak@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:20:59 by fananrak          #+#    #+#             */
/*   Updated: 2026/02/11 13:56:44 by fananrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *ch, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (ch[i])
	{
		while (ch[i] == c)
			i++;
		if (ch[i])
		{
			count++;
			while (ch[i] && ch[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**free_all(char **res, int j)
{
	while (j >= 0)
	{
		free(res[j]);
		j--;
	}
	free(res);
	return (NULL);
}

static int	skip(char const *s, int i, char c)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static int	get_word_end(char const *s, int i, char c)
{
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		word_start;

	if (!s || !c)
		return (NULL);
	res = ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		i = skip(s, i, c);
		if (!s[i])
			break ;
		word_start = i;
		i = get_word_end(s, i, c);
		res[j] = ft_substr(s, word_start, i - word_start);
		if (!res[j])
			return (free_all(res, j - 1));
		j++;
	}
	return (res);
}
