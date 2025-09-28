int	ft_toupper(int character)
{
	unsigned	char	chr = (unsigned char)character;

	if (chr >= 'a' && chr <= 'z')
		return (chr - 32);
	else
	 	return (chr);
}
