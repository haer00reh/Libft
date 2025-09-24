int	ft_atoi(char	*str)
{
	int	sign;
	int	nbr;

	nbr = 0;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -sign;
	str++;
	}
	while (*str == ' ' || (*str >=9 && *str <=13))
		str++;

	while (*str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + (*str - '0');
	str++;
	}
	return (nbr * sign);
}
