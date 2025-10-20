/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haer-reh <haer-reh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:54:32 by haer-reh          #+#    #+#             */
/*   Updated: 2025/10/16 13:38:58 by haer-reh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*set;
	size_t			i;
	unsigned char	chr;

	i = 0;
	chr = (unsigned char)c;
	set = (unsigned char *)s;
	while (i < n)
	{
		set[i] = chr;
		i++;
	}
	return (set);
}
