/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <ahector@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 20:27:57 by ahector           #+#    #+#             */
/*   Updated: 2021/12/20 18:09:12 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int fd, int isUpper)
{
	char			*table;
	int				counter;

	counter = 0;
	if (isUpper)
		table = "0123456789ABCDEF";
	else
		table = "0123456789abcdef";
	if (n >= 16)
	{
		counter += ft_puthex(n / 16, fd, isUpper);
		counter += ft_puthex(n % 16, fd, isUpper);
	}
	else
		counter += ft_putchar_fd(table[n], fd);
	return (counter);
}
