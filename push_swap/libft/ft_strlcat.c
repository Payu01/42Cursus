/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:54:14 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/04/25 12:34:21 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i1;
	size_t	i2;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen((char *)src);
	i1 = dest_len;
	i2 = 0;
	if (dstsize == 0 || dstsize <= dest_len)
		return (src_len + dstsize);
	while (src[i2] && i1 < dstsize - 1)
	{
		*(dest + i1) = *(src + i2);
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest_len + src_len);
}
