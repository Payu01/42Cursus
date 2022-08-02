/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 10:29:33 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/04/30 10:39:32 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)s;
	if (str && f)
	{
		while (str[i])
		{
			(*f)(i, &str[i]);
			i++;
		}
	}
}
