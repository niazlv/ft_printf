/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <ahector@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:44:17 by ahector           #+#    #+#             */
/*   Updated: 2021/10/30 21:51:22 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_fd(unsigned int u, int fd)
{
	int	counter;

	counter = 0;
	if (u >= 10)
	{
		counter += ft_putnbr_fd(u / 10, fd);
		counter += ft_putnbr_fd(u % 10, fd);
	}
	else
		counter += ft_putchar_fd(u + 48, fd);
	return (counter);
}
