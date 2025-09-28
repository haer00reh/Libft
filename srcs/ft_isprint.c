int	ft_isprint(int c)
{
	unsigned	char	chr = (unsigned char)c;

	if (chr >= 32 && chr <= 126)
		return (1);
	else
	 	return (0);
}
