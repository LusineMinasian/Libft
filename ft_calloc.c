/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminasia <lminasia@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:23:02 by lminasia          #+#    #+#             */
/*   Updated: 2026/02/11 20:21:46 by lminasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>
// #include <string.h>
// #include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total);
	return (ptr);
}

/*
int main(void)
{
	size_t	i;
	int	*arr;

	arr = ft_calloc(5, sizeof(int));
	if (!arr)
	{
		printf("Allocation failed\n");
		return (1);
	}

	i = 0;
	while (i < 5)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}

	free(arr);
	return (0);
}
*/
