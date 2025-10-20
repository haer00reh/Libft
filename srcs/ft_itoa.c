/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haer-reh <haer-reh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:14:52 by haer-reh          #+#    #+#             */
/*   Updated: 2025/10/17 18:02:36 by haer-reh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	int_len(long n)
{
	unsigned int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	size;
	long			nb;

	nb = n;
	if (nb == 0)
		return (ft_strdup("0"));
	size = int_len(nb);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
	}
	while (nb != 0)
	{
		str[--size] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
