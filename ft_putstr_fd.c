/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <ahector@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:57:47 by ahector           #+#    #+#             */
/*   Updated: 2021/10/30 22:08:46 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	counter;

	counter = 0;
	if (s == NULL)
	{
		counter += ft_putstr_fd("(null)", fd);
		return (counter);
	}
	counter = ft_strlen(s);
	write(fd, s, counter);
	return (counter);
}
