/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haer-reh <haer-reh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:39:05 by haer-reh          #+#    #+#             */
/*   Updated: 2025/10/16 11:25:27 by haer-reh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*set1;
	unsigned char	*set2;
	size_t			i;

	set1 = (unsigned char *)s1;
	set2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (set1[i] != set2[i])
			return (set1[i] - set2[i]);
		i++;
	}
	return (0);
}
