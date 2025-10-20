/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haer-reh <haer-reh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:14:44 by haer-reh          #+#    #+#             */
/*   Updated: 2025/10/16 11:25:23 by haer-reh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*set;
	unsigned char	chr;
	size_t			i;

	chr = (unsigned char)c;
	set = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (set[i] == chr)
			return (&set[i]);
		i++;
	}
	return (NULL);
}
