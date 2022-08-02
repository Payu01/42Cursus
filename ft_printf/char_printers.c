/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_printers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:38:57 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/05/30 10:54:23 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putstr(char *s, int tc)
{
	if (!s)
	{
		write(1, "(null)", 6);
		return (tc += 6);
	}
	if (s)
	{
		write(1, s, ft_strlen(s));
		tc += ft_strlen(s);
	}
	return (tc);
}

int	ft_putnbr(int n, int tc)
{
	if (n == -2147483648)
		tc = ft_putstr("-2147483648", tc);
	else if (n < 0)
	{
		ft_putchar('-');
		tc++;
		tc = ft_putnbr((n * -1), tc);
	}
	else if (n < 10)
	{
		ft_putchar(n + '0');
		tc++;
	}
	else
	{
		tc = ft_putnbr((n / 10), tc);
		ft_putchar((n % 10) + '0');
		tc++;
	}
	return (tc++);
}
