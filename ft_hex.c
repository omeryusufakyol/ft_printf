/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyol <oakyol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 03:41:44 by oakyol            #+#    #+#             */
/*   Updated: 2024/11/16 04:09:22 by oakyol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int n, char format)
{
	int	len;
	int	i;

	len = 0;
	if (n >= 16)
	{
		i = ft_hex(n / 16, format);
		if (i == -1)
			return (-1);
		len += i;
	}
	if (format == 'X')
		if (ft_putchar("0123456789ABCDEF"[n % 16]) == -1)
			return (-1);
	if (format == 'x')
		if (ft_putchar("0123456789abcdef"[n % 16]) == -1)
			return (-1);
	return (len + 1);
}
