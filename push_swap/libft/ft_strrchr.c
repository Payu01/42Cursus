/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:04:56 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/05/06 10:20:40 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s) + 1;
	while (i--)
	{
		if (*(s + i) == (unsigned char) c)
			return ((char *)(s + i));
	}
	return (0);
}
