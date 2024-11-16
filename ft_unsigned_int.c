/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyol <oakyol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 04:09:44 by oakyol            #+#    #+#             */
/*   Updated: 2024/11/16 04:56:40 by oakyol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_int(unsigned int n)
{
	int		len;
	int		i;

	len = 0;
	if (n >= 10)
	{
		i = ft_unsigned_int(n / 10);
		if (i == -1)
			return (-1);
		len += i;
	}
	if (ft_putchar("0123456789"[n % 10]) == -1)
		return (-1);
	return (len + 1);
}
