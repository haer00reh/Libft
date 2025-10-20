#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *str, const char *to_find)
{
	int	i;
	int	j;

	if (!*to_find)
		return ((char *)str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return ((char *)&str[i]);
	i++;
	}
	return (NULL);
}
