/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:44:11 by kabasolo          #+#    #+#             */
/*   Updated: 2024/05/03 13:38:24 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	filter(char c, va_list va)
{
	if (c == 'c')
		return (write(1, &(char){va_arg(va, int)}, 1));
	if (c == 's')
		return (string(va_arg(va, char *)));
	if (c == 'p')
		return (write(1, "0x", 2) + hex(va_arg(va, unsigned long), HEX_MIN));
	if (c == 'd' || c == 'i')
		return (dec(va_arg(va, int)));
	if (c == 'u')
		return (dec(va_arg(va, unsigned int)));
	if (c == 'x')
		return (hex(va_arg(va, unsigned int), HEX_MIN));
	if (c == 'X')
		return (hex(va_arg(va, unsigned int), HEX_MAX));
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
			n += filter(*++s, va);
		else
			n += write(1, s, 1);
		s += !(!s);
	}
	return (va_end(va), n);
}
