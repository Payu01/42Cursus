/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:04:40 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/06/10 15:46:38 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_selector(char c, va_list dlst, int tc)
{
	if (c == 'c')
	{
		ft_putchar(va_arg(dlst, int));
		tc++;
	}
	else if (c == 's')
		tc = ft_putstr(va_arg(dlst, char *), tc);
	else if (c == '%')
	{
		ft_putchar('%');
		tc++;
	}
	else if (c == 'd' || c == 'i')
		tc = ft_putnbr(va_arg(dlst, int), tc);
	else if (c == 'u')
		tc = base10(va_arg(dlst, unsigned int), tc);
	else if (c == 'x')
		tc = lchex(va_arg(dlst, unsigned int), tc);
	else if (c == 'X')
		tc = uchex(va_arg(dlst, unsigned int), tc);
	else if (c == 'p')
		tc = pnt(va_arg(dlst, unsigned long), tc, 1);
	return (tc);
}

int	ft_printf(char const *input, ...)
{
	int		i;
	int		tc;
	va_list	dlst;

	i = 0;
	tc = 0;
	va_start(dlst, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			if (ft_strchr ("cspdiuxX%", input[i + 1]))
				tc = ft_selector(input[i++ + 1], dlst, tc);
		}
		else
		{
			ft_putchar(input[i]);
			tc++;
		}
		i++;
	}
	va_end(dlst);
	return (tc);
}

int main(void)
{
	long n;

	n = 854215848623;
	ft_printf("%x", n);
	return (0);
}
