/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:25:22 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/04/28 09:58:10 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*s;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (0);
	dest = (unsigned char *) dst;
	s = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}
