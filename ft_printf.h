/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <ahector@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:04:11 by ahector           #+#    #+#             */
/*   Updated: 2021/12/20 16:57:48 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putpnbr_fd(unsigned long int n, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_strlen(const char *s);
int		ft_argshandle(const char *str, va_list ap);
int		ft_puthex(unsigned int n, int fd, int isUpper);
int		ft_putunbr_fd(unsigned int u, int fd);

#endif
