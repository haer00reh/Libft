/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haer-reh <haer-reh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:38:01 by haer-reh          #+#    #+#             */
/*   Updated: 2025/10/16 11:25:13 by haer-reh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char	chr;

	chr = (unsigned char)c;
	if (chr >= '0' && chr <= '9')
		return (1);
	else
		return (0);
}
