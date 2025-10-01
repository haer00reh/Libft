#include <string.h>

void	*ft_memcpy(void *dest, void *source, size_t n)
{
	unsigned	char	*a = (unsigned char *)dest;
	unsigned	char	*b = (unsigned char *)source;
	size_t			i;

	i = 0;
	while (i < n)
	{
	a[i] = b[i];
	i++;
	}
	return (dest);
}
