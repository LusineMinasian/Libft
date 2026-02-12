#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	maxcopy;

	i = 0;
	dstlen = strlen(dst);
	maxcopy = dstsize - dstlen - 1;
	while ((src[i] != '\0') && (i < maxcopy))
	{
		dst[i + dstsize] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dstlen + strlen(src));
}

int	main(void)
{
	char	a[] = "Hi";
	char	b[10] = "Hello!";
	
	printf("before editing: %s \n", b);
	ft_strlcat(b, a, 10);
	printf("after editing: %s", b);
	return (0);
}
