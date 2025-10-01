#include <string.h>

void	*ft_memset(void	*ptr, int c, size_t n)
{
	size_t	i;
	unsigned 	char *p = (unsigned char *)ptr;
	unsigned 	char val;

	i = 0;
	val = (unsigned char)c;
	while (i < n)
	{
	p[i] = val;
	i++;
	}

	return (ptr);
}
