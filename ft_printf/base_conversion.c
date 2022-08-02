/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:50:28 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/06/10 15:46:54 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	base10(unsigned int i, int tc)
{
	char	*base;

	base = "0123456789";
	if (i >= 10)
	{
		tc = base10(i / 10, tc);
		tc = base10(i % 10, tc);
	}
	else
	{
		ft_putchar(base[i]);
		tc++;
	}
	return (tc);
}

int	lchex(unsigned int i, int tc)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		tc = lchex(i / 16, tc);
		tc = lchex(i % 16, tc);
	}
	else
	{
		ft_putchar(base[i]);
		tc++;
	}
	return (tc);
}

int	uchex(unsigned int i, int tc)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (i >= 16)
	{
		tc = uchex(i / 16, tc);
		tc = uchex(i % 16, tc);
	}
	else
	{
		ft_putchar(base[i]);
		tc++;
	}
	return (tc);
}

int	pnt(unsigned long i, int tc, int boolean)
{
	char	*base;

	base = "0123456789abcdef";
	if (boolean)
	{
		write(1, "0x", 2);
		tc += 2;
	}
	if (i >= 16)
	{
		tc = pnt(i / 16, tc, 0);
		tc = pnt(i % 16, tc, 0);
	}
	else
	{
		ft_putchar(base[i]);
		tc++;
	}
	return (tc);
}
