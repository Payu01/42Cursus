/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:17:50 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/04/28 09:59:16 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	nlen;

	if (n[0] == '\0')
		return ((char *) h);
	nlen = ft_strlen((char *)n);
	while (*h != '\0' && len-- >= nlen)
	{
		if (*h == *n && ft_memcmp(h, n, nlen) == 0)
			return ((char *)h);
		h++;
	}
	return (0);
}
