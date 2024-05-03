/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:12:05 by kabasolo          #+#    #+#             */
/*   Updated: 2024/05/03 13:08:21 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dec(long nbr)
{
	if (nbr < 0)
		return (write(1, "-", 1) + dec(-nbr));
	if (nbr > 9)
		return (dec(nbr / 10) + write(1, &DEC[nbr % 10], 1));
	return (write(1, &DEC[nbr % 10], 1));
}

int	hex(unsigned long nbr, char *base)
{
	if (nbr > 15)
		return (hex(nbr / 16, base) + write(1, &base[nbr % 16], 1));
	return (write(1, &base[nbr % 16], 1));
}

int	string(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (string("(null)"));
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}
