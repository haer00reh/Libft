#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	ft_strdel(char **as)
{
	if (as && *as)
	{
	free(*as);
	*as = NULL;
	}
}
