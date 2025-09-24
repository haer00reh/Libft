void	*ft_memchr(void *ptr, int c, unsigned long n)
{
	unsigned	long	i;
	unsigned 	char *p = (unsigned char *)ptr;
	unsigned 	char val = (unsigned char)c;

	i = 0;
	while (i < n)
	{
		if (p[i] == val)
			return ((void *)&p[i]);
	i++;
	}

	return (0);
}
