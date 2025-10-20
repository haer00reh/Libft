#include "libft.h"
#include <string.h>
#include <stdlib.h>

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

char	*ft_strnew(size_t size)
{
	char	*str;

	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}
