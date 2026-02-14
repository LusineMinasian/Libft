/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminasia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:56:12 by lminasia          #+#    #+#             */
/*   Updated: 2026/02/14 17:57:49 by lminasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	ft_freesplit(char **res, size_t k)
{
	size_t	i;

	i = 0;
	while (i < k)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

static char	*ft_makeword(char const *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static int	fill_split(char const *s, char c, char **res)
{
	size_t	i;
	size_t	k;
	size_t	start;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		res[k] = ft_makeword(s, start, i);
		if (!res[k])
		{
			ft_freesplit(res, k);
			return (0);
		}
		k++;
	}
	res[k] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (!fill_split(s, c, res))
		return (NULL);
	return (res);
}
