/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminasia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:27:33 by lminasia          #+#    #+#             */
/*   Updated: 2026/02/12 18:27:45 by lminasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	maxcopy;

	i = 0;
	dstlen = ft_strlen(dst);
	maxcopy = dstsize - dstlen - 1;
	while ((src[i] != '\0') && (i < maxcopy))
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	dst[i + dstlen] = '\0';
	return (dstlen + ft_strlen(src));
}

/*
int	main(void)
{
	char	a[] = "Hi";
	char	b[10] = "Hello!";
	
	printf("before editing: %s \n", b);
	ft_strlcat(b, a, 10);
	printf("after editing: %s", b);
	return (0);
}
*/
