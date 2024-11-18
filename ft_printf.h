/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyol <oakyol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:54:39 by oakyol            #+#    #+#             */
/*   Updated: 2024/11/16 04:25:04 by oakyol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_format(va_list arg, const char format);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_check(char c);
int	ft_int(int n);
int	ft_hex(unsigned int n, const char format);
int	ft_unsigned_int(unsigned int n);
int	ft_pointer(unsigned long int n, int mod);

#endif
