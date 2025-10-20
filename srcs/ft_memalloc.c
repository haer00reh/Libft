#include "libft.h"
#include <stdlib.h>
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

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = malloc(size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
