int	ft_isalpha(int c)
{
	unsigned	char	alpha = (unsigned char)c;

	if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z' ))
		return (1);
	else
	 	return (0);
}
