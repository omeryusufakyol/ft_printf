/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyol <oakyol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:55:41 by oakyol            #+#    #+#             */
/*   Updated: 2024/11/16 04:31:46 by oakyol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count_check(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && !ft_check(s[i + 1]) && s[i + 1] != '\0')
			return (2);
		else if (s[i] == '%' && s[i + 1] == '\0' && s[i - 1] != '%')
			return (1);
		i++;
	}
	return (0);
}

static int	ft_loop(va_list arg, const char *format, int n)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && ft_check(format[i + 1]))
		{
			len += ft_format(arg, format[++i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '\0' && n != 2)
			i++;
		else
		{
			if (ft_putchar(format[i]) == -1)
				return (-1);
			len++;
			i++;
		}
	}
	if (n == 1)
		return (-1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		n;
	va_list	arg;

	n = ft_count_check(format);
	va_start(arg, format);
	len = ft_loop(arg, format, n);
	va_end(arg);
	return (len);
}
