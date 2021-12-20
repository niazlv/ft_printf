/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <ahector@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:26:02 by ahector           #+#    #+#             */
/*   Updated: 2021/12/20 16:59:07 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		counter;

	va_start(ap, str);
	counter = 0;
	while (*str != 0)
	{
		if (*str == '%' && *(str + 1) != 0)
		{
			str++;
			counter += ft_argshandle(str, ap);
		}
		else
			counter += ft_putchar_fd(*str, 1);
		str++;
	}
	va_end(ap);
	return (counter);
}
