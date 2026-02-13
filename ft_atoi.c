/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminasia <lminasia@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 21:12:35 by lminasia          #+#    #+#             */
/*   Updated: 2026/02/12 21:32:45 by lminasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	result;
	size_t	i;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

/*
void	main()
{
	const char string[] = {'1','2','3','\0'};
	int	n;

	n = ft_atoi(string);
	printf("result %d", n);
}
*/
