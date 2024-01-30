/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:32:09 by kabasolo          #+#    #+#             */
/*   Updated: 2024/01/30 12:54:41 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num(long int nbr, char *base)
{
	if (nbr < 0)
		return (write(1, "-", 1) + ft_num(nbr * (-1), base));
	if (nbr > 9)
		return (ft_num(nbr / 10, base) + write(1, &base[nbr % 10], 1));
	return (write(1, &base[nbr % 10], 1));
}
