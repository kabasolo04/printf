/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:40:48 by kabasolo          #+#    #+#             */
/*   Updated: 2024/01/26 12:41:17 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned long nbr, char *base)
{
	if (nbr > 15)
		return (ft_hex(nbr / 16, base) + write(1, &base[nbr % 16], 1));
	return (write(1, &base[nbr % 16], 1));
}
