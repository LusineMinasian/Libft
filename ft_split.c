/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminasia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 23:14:44 by lminasia          #+#    #+#             */
/*   Updated: 2026/02/12 23:17:09 by lminasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

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

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	k;
	size_t	start;
	char	**res;

	if (!s)
		return (NULL);
	res = malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] == '\0')
			break;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		res[k] = ft_makeword(s, start, i);
		if (!res[k])
		{
			ft_freesplit(res, k);
			return (NULL);
		}
		k++;
	}
	res[k] = NULL;
	return (res);
}

/*
int	main(void)
{
	char	**res;
	size_t	i;

	res = ft_split("Hello   worl how to write ?", ' ');
	if (!res)
	{
		printf("ft_split failed\n");
		return (1);
	}
	i = 0;
	while (res[i] != NULL)
	{
		printf("res[%zu] = \"%s\"\n", i, res[i]);
		i++;
	}
	i = 0;
	while (res[i] != NULL)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}
*/
