/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <ahector@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 20:14:22 by ahector           #+#    #+#             */
/*   Updated: 2021/10/30 21:52:16 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpnbr_fd(unsigned long int n, int fd)
{
	int					counter;
	const char			*table;

	table = "0123456789abcdef";
	counter = 0;
	if (n > 15)
	{
		counter += ft_putpnbr_fd(n / 16, fd);
		counter += ft_putpnbr_fd(n % 16, fd);
	}
	else
		counter += ft_putchar_fd(table[n], fd);
	return (counter);
}
