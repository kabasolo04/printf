/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:25:05 by kabasolo          #+#    #+#             */
/*   Updated: 2024/01/31 10:33:04 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define NUM "0123456789"
# define HEX1 "0123456789abcdef"
# define HEX2 "0123456789ABCDEF"

int	ft_str(char *str);
int	ft_dec(long nbr, char *base);
int	ft_hex(unsigned long nbr, char *base);
int	ft_printf(char const *s, ...);

#endif //FT_PRINTF_H