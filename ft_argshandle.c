/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argshandle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <ahector@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:56:46 by ahector           #+#    #+#             */
/*   Updated: 2021/12/20 18:08:52 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_argshandle(const char *str, va_list ap)
{
	int	counter;

	counter = 0;
	if (*str == 'c')
		counter += ft_putchar_fd(va_arg(ap, int), 1);
	else if (*str == 's')
		counter += ft_putstr_fd(va_arg(ap, char *), 1);
	else if (*str == 'x')
		counter += ft_puthex(va_arg(ap, unsigned int), 1, 0);
	else if (*str == 'X')
		counter += ft_puthex(va_arg(ap, unsigned int), 1, 1);
	else if (*str == 'p')
	{
		counter += ft_putstr_fd("0x", 1);
		counter += ft_putpnbr_fd(va_arg(ap, unsigned long int), 1);
	}
	else if (*str == '%')
		counter += ft_putchar_fd('%', 1);
	else if (*str == 'd' || *str == 'i')
		counter += ft_putnbr_fd(va_arg(ap, int), 1);
	else if (*str == 'u')
		counter += ft_putunbr_fd(va_arg(ap, unsigned int), 1);
	return (counter);
}
