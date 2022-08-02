/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:43:52 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/05/06 09:47:12 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fstr;
	size_t	i;
	size_t	b;

	if (!s1 || !s2)
		return (NULL);
	fstr = malloc(sizeof(char) * ((ft_strlen(s1)) + ft_strlen(s2) + 1));
	if (!fstr)
		return (NULL);
	i = 0;
	b = 0;
	while (s1[i])
	{
		fstr[i] = s1[i];
		i++;
	}
	while (s2[b])
	{
		fstr[i + b] = s2[b];
		b++;
	}
	fstr[i + b] = '\0';
	return (fstr);
}
