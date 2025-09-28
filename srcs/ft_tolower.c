int	ft_tolower(int character)
{
	unsigned	char	chr = (unsigned char)character;

	if (chr >= 'A' && chr <= 'Z')
		return (chr + 32);
	else
	 	return (chr);
}
