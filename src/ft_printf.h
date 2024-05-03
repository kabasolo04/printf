/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:25:05 by kabasolo          #+#    #+#             */
/*   Updated: 2024/05/03 13:09:34 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define DEC "0123456789"
# define HEX_MIN "0123456789abcdef"
# define HEX_MAX "0123456789ABCDEF"

int	dec(long nbr);
int	hex(unsigned long nbr, char *base);
int	string(char *str);
int	ft_printf(char const *s, ...);

#endif //FT_PRINTF_H