int	ft_isdigit(int c)
{
	unsigned	char	chr = (unsigned char)c;

	if (chr >= '0' && chr <= '9')
		return (1);
	else
	 	return (0);
}
