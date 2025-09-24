void	*ft_memset(void	*ptr, int c, unsigned	long n)
{
	unsigned	long	i;
	unsigned 	char *p = (unsigned char *)ptr;
	unsigned 	char val;

	i = 0;
	val = (unsigned char)c;
	while (i < n)
	{
	p[i] = val;
	i++;
	}

	return (ptr);
}
