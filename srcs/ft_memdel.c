#include <stdlib.h>
#include <string.h>

void	ft_memdel(void **ap)
{
	if (ap && *ap)
	{
	free(*ap);
	*ap = NULL;
	}
}
