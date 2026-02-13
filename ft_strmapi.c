/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminasia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:02:02 by lminasia          #+#    #+#             */
/*   Updated: 2026/02/13 17:02:07 by lminasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		slen;
	char		*nstr;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	nstr = malloc(slen + 1);
	if (!nstr)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		nstr[i] = f(i, s[i]);
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}

