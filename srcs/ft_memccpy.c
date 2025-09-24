void	*ft_memccpy(void *dest, void *source, int c, unsigned long n)
{
	unsigned	char		*a = (unsigned char *)dest;
	unsigned	char		*b = (unsigned char *)source;	
	unsigned	char		val = (unsigned char)c;
	unsigned 	long		i = 0;

	while (i < n)
	{
		a[i] = b[i];
		if (b[i] == val)
			return (a + i + 1);
	i++;
	}

	return (0);
}
