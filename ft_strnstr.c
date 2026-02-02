/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminasia <lminasia@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 05:34:42 by lminasia          #+#    #+#             */
/*   Updated: 2026/02/02 05:34:45 by lminasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while ((i < len) && (haystack[i] != '\0'))
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while ((needle[j] != '\0') && (i + j < len) && (needle[j] == haystack[i + j]))
				j++;
			if (needle[j] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
    const char *h = "hello world";
    const char *n = "world";
    char *res = ft_strnstr(h, n, 11);

    printf("%s\n", res ? res : "NULL");
    return 0;
}
*/
