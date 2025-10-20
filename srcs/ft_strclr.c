#include "libft.h"

void	ft_strclr(char *str)
{
	size_t	len;

	if (!str)
		return;
	len = 0;
	while (str[len])
		len++;
	ft_bzero(str, len);
}
