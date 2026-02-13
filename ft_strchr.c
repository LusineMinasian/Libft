/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminasia <lminasia@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 00:29:19 by lminasia          #+#    #+#             */
/*   Updated: 2026/02/01 00:29:45 by lminasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	*ptr;
	unsigned char		byte;
	size_t				i;
	size_t				len;

	ptr = (const unsigned char *)s;
	byte = (unsigned char)c;
	i = 0;
	len = ft_strlen(s) + 1;
	while (i < len)
	{
		if (ptr[i] == byte)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
