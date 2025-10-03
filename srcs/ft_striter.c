void	ft_striter(char *str, void (*f) (char *))
{
	while (*str)
		(*f)(str++);
}
