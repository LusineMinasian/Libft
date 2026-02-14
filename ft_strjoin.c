/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminasia <lminasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 21:25:43 by lminasia          #+#    #+#             */
/*   Updated: 2026/02/14 17:40:55 by lminasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*sjoin;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	sjoin = malloc(s1len + s2len + 1);
	if (!sjoin)
		return (NULL);
	i = -1;
	while (++i < s1len)
		sjoin[i] = s1[i];
	j = -1;
	while (++j < s2len)
		sjoin[i + j] = s2[j];
	sjoin[i + j] = '\0';
	return (sjoin);
}
