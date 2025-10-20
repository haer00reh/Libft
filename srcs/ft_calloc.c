/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haer-reh <haer-reh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:51:02 by haer-reh          #+#    #+#             */
/*   Updated: 2025/10/20 15:26:34 by haer-reh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
