/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:44:11 by kabasolo          #+#    #+#             */
/*   Updated: 2024/01/31 10:33:57 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversor(char c, va_list va)
{
	if (c == 'c')
		return (write(1, &(char){va_arg(va, int)}, 1));
	if (c == 's')
		return (ft_str(va_arg(va, char *)));
	if (c == 'p')
		return (write(1, "0x", 2) + ft_hex(va_arg(va, unsigned long), HEX1));
	if (c == 'd' || c == 'i')
		return (ft_dec(va_arg(va, int), NUM));
	if (c == 'u')
		return (ft_dec(va_arg(va, unsigned int), NUM));
	if (c == 'x')
		return (ft_hex(va_arg(va, unsigned int), HEX1));
	if (c == 'X')
		return (ft_hex(va_arg(va, unsigned int), HEX2));
	return (write(1, &c, 1));
}

int	ft_printf(char const *s, ...)
{
	int		n;
	va_list	va;

	n = 0;
	va_start(va, s);
	while (*s)
	{
		if (*s == '%')
			n += ft_conversor(*++s, va);
		else
			n += write(1, s, 1);
		if (*s)
			s ++;
	}
	va_end(va);
	return (n);
}
