#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	unsigned	char		*a = (unsigned char *)s;	

	i = 0;
	while (i < n)
	{
	a[i] = '\0';
	i++;
	}
}
