#include <stdlib.h>

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*coffee = NULL;
	int	i;

	coffee = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!coffee)
		return (NULL);
	i = 0;
	while (s[i])
	{
	coffee[i] = (*f)(s[i]);
	i++;
	}
	coffee[i] = '\0';
	return (coffee);
}
