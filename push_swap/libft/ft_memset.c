/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:02:58 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/04/28 09:45:09 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*fstr;
	size_t			i;

	i = 0;
	fstr = (unsigned char *) str;
	while (i < len)
	{
		*fstr = (unsigned char)c;
		i++;
		fstr++;
	}
	return (str);
}
