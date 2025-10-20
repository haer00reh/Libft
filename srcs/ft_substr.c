/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haer-reh <haer-reh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:02:43 by haer-reh          #+#    #+#             */
/*   Updated: 2025/10/20 12:12:19 by haer-reh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	s_len;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	s_len = ft_strlen(s + start);
	i = 0;
	if (s_len < len)
		len = s_len;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (s[start] && i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	return (str);
}
