#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, unsigned long n)
{
	unsigned	long		i;
	unsigned	char		*a = (unsigned char *)s;	

	i = 0;
	if (n == 0)
		return;
	while (i < n)
	{
	a[i] = '\0';
	i++;
	}
}
