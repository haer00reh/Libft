/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haer-reh <haer-reh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:02:17 by haer-reh          #+#    #+#             */
/*   Updated: 2025/10/16 11:23:24 by haer-reh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = 0;
	s_len = 0;
	while (dst[d_len])
		d_len++;
	while (src[s_len])
		s_len++;
	if (d_len >= size)
		return (s_len + size);
	i = 0;
	if (size > 0)
	{
		while (src[i] && (d_len + i < size - 1))
		{
			dst[d_len + i] = src[i];
			i++;
		}
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
