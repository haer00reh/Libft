#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(char *str, int c)
{
	unsigned	char ch = (unsigned char)c;
	int		i;

	i = ft_strlen(str);

	while (i >= 0)
	{

		if (str[i] == ch)
			return (&str[i]);
	i--;
	}
	return (NULL);
}
