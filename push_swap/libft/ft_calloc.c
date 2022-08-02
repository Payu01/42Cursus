/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:24:37 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/05/03 11:20:37 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*buffer;

	if (n == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	buffer = (void *)malloc(n * size);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, size * n);
	return (buffer);
}
