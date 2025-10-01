#include <string.h>

void	*ft_memccpy(void *dest, void *source, int c, size_t n)
{
	unsigned	char		*a = (unsigned char *)dest;
	unsigned	char		*b = (unsigned char *)source;	
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
