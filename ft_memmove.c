/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminasia <lminasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 03:47:16 by lminasia          #+#    #+#             */
/*   Updated: 2026/02/14 17:48:46 by lminasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_memory(unsigned char *d, const unsigned char *s, size_t count)
{
	size_t			i;

	if (d < s)
	{
		i = 0;
		while (i < count)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = count;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t count)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!d && !src)
		return (NULL);
	if (d == s || count == 0)
		return (dst);
	fill_memory(d, s, count);
	return (dst);
}
