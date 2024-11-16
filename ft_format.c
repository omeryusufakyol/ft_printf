/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyol <oakyol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 23:05:24 by oakyol            #+#    #+#             */
/*   Updated: 2024/11/16 04:26:04 by oakyol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list arg, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (format == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (format == 'd' || format == 'i')
		len += ft_int(va_arg(arg, int));
	else if (format == 'x' || format == 'X')
		len += ft_hex(va_arg(arg, unsigned int), format);
	else if (format == 'u')
		len += ft_unsigned_int(va_arg(arg, unsigned int));
	else if (format == 'p')
		len += ft_pointer(va_arg(arg, unsigned long int), 1);
	else if (format == '%')
		return (ft_putchar('%'));
	return (len);
}
