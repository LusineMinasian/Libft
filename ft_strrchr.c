/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminasia <lminasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 04:31:25 by lminasia          #+#    #+#             */
/*   Updated: 2026/02/14 00:10:03 by lminasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	byte;
	const char		*last;

	byte = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if ((unsigned char)*s == byte)
			last = s;
		s++;
	}
	if (byte == '\0')
		return ((char *)s);
	return ((char *)last);
}
