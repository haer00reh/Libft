void	*ft_memcpy(void *dest, void *source, unsigned long n)
{
	unsigned	char	*a = (unsigned char *)dest;
	unsigned	char	*b = (unsigned char *)source;
	unsigned	long	i;

	i = 0;
	while (i < n)
	{
	a[i] = b[i];
	i++;
	}
	return (dest);
}
