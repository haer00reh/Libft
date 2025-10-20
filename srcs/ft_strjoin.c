/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haer-reh <haer-reh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:17:58 by haer-reh          #+#    #+#             */
/*   Updated: 2025/10/16 15:09:02 by haer-reh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	char			*str;

	len = ft_strlen((char *)s1);
	len += ft_strlen((char *)s2);
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	len = 0;
	while (*s1)
	{
		str[len] = *s1;
		s1++;
		len++;
	}
	while (*s2)
	{
		str[len] = *s2;
		s2++;
		len++;
	}
	return (str);
}
