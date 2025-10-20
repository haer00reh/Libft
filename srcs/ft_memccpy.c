#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	unsigned	char		*a = (unsigned char *)dest;
	const unsigned	char	*b = (const unsigned char *)source;	
	unsigned	char		val = (unsigned char)c;
	size_t				i;
	
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		if (b[i] == val)
			return (a + i + 1);
	i++;
	}

	return (NULL);
}
