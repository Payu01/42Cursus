/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:12:42 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/05/03 10:06:41 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	intlen(int n)
{
	int	cnt;

	cnt = 1;
	while (n >= 10)
	{
		cnt *= 10;
		n /= 10;
	}
	return (cnt);
}

size_t	charlen(int i)
{
	size_t	cnt;
	int		tempi;

	cnt = 0;
	tempi = i;
	if (tempi < 0)
	{
		cnt++;
		tempi *= -1;
	}
	while (tempi >= 1)
	{
		cnt++;
		tempi = tempi / 10;
	}
	return (cnt);
}

char	*converter(char *str, int boolean, int n, int len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		if (boolean == 1)
		{
			str[i] = '-';
			i++;
			boolean = 0;
		}
		str[i++] = ((n / len) % 10) + '0';
		len /= 10;
	}
	str[i] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	strlen;
	int		boolean;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	strlen = charlen(n);
	str = (char *)malloc(sizeof (char) * (strlen + 1));
	if (!str)
		return (0);
	ft_memset(str, '\0', (strlen + 1));
	boolean = 0;
	if (n < 0)
	{
		boolean = 1;
		n *= -1;
	}
	return (converter(str, boolean, n, intlen(n)));
}
