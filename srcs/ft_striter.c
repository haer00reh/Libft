void	ft_striter(char *str, void (*f) (char *))
{
	if (!str || !f)
		return;
	while (*str)
		(*f)(str++);
}
