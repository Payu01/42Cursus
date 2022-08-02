/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:46:42 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/04/28 09:58:28 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*s;
	size_t	i;

	dest = (char *) dst;
	s = (char *) src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dest > s)
	{
		while (len-- > 0)
			dest[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			dest[i] = s[i];
			i++;
		}
	}
	return (dst);
}
