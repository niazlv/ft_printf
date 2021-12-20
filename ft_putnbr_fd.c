/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <ahector@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:17:39 by ahector           #+#    #+#             */
/*   Updated: 2021/10/30 20:40:55 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;
	int				counter;

	counter = 0;
	if (n < 0)
	{
		counter += ft_putchar_fd('-', fd);
		num = (unsigned)(-n);
	}
	else
		num = n;
	if (num >= 10)
	{
		counter += ft_putnbr_fd(num / 10, fd);
		counter += ft_putchar_fd((num % 10) + 48, fd);
	}
	else
		counter += ft_putchar_fd(num + 48, fd);
	return (counter);
}
