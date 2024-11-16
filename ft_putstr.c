/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyol <oakyol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 23:44:12 by oakyol            #+#    #+#             */
/*   Updated: 2024/11/16 03:49:01 by oakyol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int			len;
	const char	*null_str;

	null_str = "(null)";
	len = 0;
	if (str == (void *)0)
	{
		while (null_str[len])
		{
			ft_putchar(null_str[len]);
			len++;
		}
		return (len);
	}
	while (str[len])
	{
		ft_putchar(str[len]);
		len++;
	}
	return (len);
}
