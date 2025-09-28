int	ft_isascii(int c)
{
	unsigned	char	chr = (unsigned char)c;

	if (chr >= 0 && chr <= 127)
		return (1);
	else
	 	return (0);
}
