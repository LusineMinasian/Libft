/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminasia <lminasia@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 04:31:25 by lminasia          #+#    #+#             */
/*   Updated: 2026/02/02 04:32:00 by lminasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char		byte;
	const unsigned char	*ptr;
	size_t				len;
	size_t				i;

	len = ft_strlen(s) + 1;
	byte = (unsigned char)c;
	ptr = (const unsigned char *)s;
	i = len;
	while (i > 0)
	{
		if (ptr[i - 1] == byte)
			return ((char *)(s + (i - 1)));
		i--;
	}
	return (NULL);
} 
