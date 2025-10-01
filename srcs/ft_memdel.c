#include <stdlib.h>
#include <string.h>

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
