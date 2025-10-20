/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haer-reh <haer-reh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:11:54 by haer-reh          #+#    #+#             */
/*   Updated: 2025/10/16 11:21:51 by haer-reh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	chr;

	chr = (unsigned char)c;
	if ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z'))
		return (1);
	else
		return (0);
}
