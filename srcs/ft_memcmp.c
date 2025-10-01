#include <stddef.h>

int	ft_memcmp(void *dest, void *source, size_t n)
{
	unsigned	char	*a = (unsigned char *)dest;
	unsigned	char	*b = (unsigned char *)source;
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
	i++;
	}
	return (0);
}
