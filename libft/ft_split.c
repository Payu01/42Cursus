/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:17:21 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/04/29 11:46:54 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wrdcount(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			cnt++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (cnt);
}

char	**freedata(char **strstr, size_t i)
{
	while (strstr[i] != NULL && i >= 0)
	{
		free(strstr[i]);
		strstr[i] = NULL;
		i--;
	}
	free(strstr);
	strstr = NULL;
	return (NULL);
}

char	**asigner(char const *s, char c, char **strstr)
{
	size_t	i;
	size_t	clen;
	size_t	wrds;

	i = 0;
	wrds = wrdcount(s, c);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			clen = 0;
			while (*(s + clen) && *(s + clen) != c)
				clen++;
			strstr[i++] = ft_substr(s, 0, clen);
			if (i - 1 < wrds && !strstr[i - 1])
				freedata(strstr, i);
			s += clen;
		}
	}
	strstr[wrds] = 0;
	return (strstr);
}

char	**ft_split(char const *s, char c)
{
	char	**strstr;

	if (!s)
		return (NULL);
	strstr = (char **)malloc(sizeof(char *) * (wrdcount(s, c) + 1));
	if (!strstr)
		return (NULL);
	asigner(s, c, strstr);
	return (strstr);
}
