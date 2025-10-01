#include <string.h>

void	*ft_memmove(void *dest, void *source, size_t n)
{
	unsigned	char	*a = (unsigned char *)dest;
	unsigned	char	*b = (unsigned char *)source;
	size_t			i;

	if (a < b)
	{
	i = 0;
		while (i < n)
		{
		a[i] = b[i];
		i++;
		}
	}
	else if (a > b)
	{
	i = n;
		while (i > 0)
		{
		a[i - 1] = b[i - 1];
		i--;
		}
	}
	return (dest);
}
