int	ft_isalnum(int c)
{
	unsigned	char	chr = (unsigned char)c;

	if ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z')
		|| (chr >= '0' && chr <= '9'))
		return (1);
	else
	 	return (0);
}
