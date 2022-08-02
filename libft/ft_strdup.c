/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:41:37 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/04/28 09:55:56 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1copy;
	size_t	s1len;

	s1len = ft_strlen(s1);
	s1copy = (char *)malloc((sizeof(char) * s1len + 1));
	if (!s1copy)
		return (NULL);
	s1copy = ft_memcpy(s1copy, s1, s1len + 1);
	return (s1copy);
}
