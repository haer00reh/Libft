/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haer-reh <haer-reh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:10:49 by haer-reh          #+#    #+#             */
/*   Updated: 2025/10/16 11:22:05 by haer-reh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	unsigned char	chr;

	chr = (unsigned char)c;
	if (chr >= 32 && chr <= 126)
		return (1);
	else
		return (0);
}
