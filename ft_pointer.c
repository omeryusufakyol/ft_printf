/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyol <oakyol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 04:21:24 by oakyol            #+#    #+#             */
/*   Updated: 2024/11/16 04:52:38 by oakyol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long int n, int mod)
{
	int	len;
	int	i;

	len = 0;
	if (n == 0)
		return (ft_putstr("(nil)"));
	if (mod == 1)
	{
		if (ft_putstr("0x") == -1)
			return (-1);
		mod = 0;
		len += 2;
	}
	if (n >= 16)
	{
		i = ft_pointer(n / 16, mod);
		if (i == -1)
			return (-1);
		len += i;
	}
	if (ft_putchar("0123456789abcdef"[n % 16]) == -1)
		return (-1);
	return (len + 1);
}
