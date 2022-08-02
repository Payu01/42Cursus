/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:08:17 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/05/13 15:43:58 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fstr;
	size_t	i;
	size_t	b;

	fstr = malloc(sizeof(char) * ((ft_strlen(s1)) + ft_strlen(s2)) + 1);
	if (!fstr || !s1 || !s2)
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

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c && *str != '\0')
		str++;
	if (*str == c)
		return (str);
	else
		return (0);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t n, size_t size)
{
	char	*buffer;

	buffer = malloc(n * size);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, size * n);
	return (buffer);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
