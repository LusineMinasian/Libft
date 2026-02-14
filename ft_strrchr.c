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
	unsigned char		byte;
	const char			*last;
	size_t				i;

	if (!s)
		return (NULL);
	byte = (unsigned char)c;
	last = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)*s == byte)
			last = s;
		s++;
	}
	if (byte == '\0')
		return ((char *)s);
	return ((char *)last);
}
