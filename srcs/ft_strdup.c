#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int	i;

	i = 0;
	ft_strlen(src);
	dest = malloc(sizeof(char) * (i + 1));
	dest[i] = '\0';
	i = 0;
	while (src[i])
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
