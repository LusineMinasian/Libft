/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminasia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 21:46:09 by lminasia          #+#    #+#             */
/*   Updated: 2026/02/14 17:46:03 by lminasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1len;
	size_t	start;
	size_t	end;
	size_t	i;
	char	*strim;

	if (!s1 || !set)
		return (NULL);
	s1len = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = s1len;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	strim = malloc(end - start + 1);
	if (!strim)
		return (NULL);
	i = 0;
	while (start < end)
		strim[i++] = s1[start++];
	strim[i] = '\0';
	return (strim);
}
