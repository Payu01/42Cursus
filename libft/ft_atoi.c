/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:57:23 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/04/28 09:56:51 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	int_to_return;
	int	i;

	i = 0;
	sign = 1;
	int_to_return = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
	}
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		int_to_return = (int_to_return * 10) + (str[i] - '0');
		i++;
	}
	int_to_return *= sign;
	return (int_to_return);
}
