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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == s || len == 0)
		return (dst);
	if (d < s)
	{
		i = -1;
		while (++i < len)
			d[i] = s[i];
	}
	else
	{
		i = len;
		while (i-- > 0)
			d[i] = s[i];
	}
	return (dst);
}
