void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	int	i;

	if (!str || !f)
		return;
	i = 0;
	while (str[i])
	{
		(*f)(i, &str[i]);
		i++;
	}
}
