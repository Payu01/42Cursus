/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mount_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:08:29 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/15 09:34:50 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

char	**int_asigner(char const *s, char c, char **strstr)
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

int	*int_split(char const *s, char c)
{
	char	**strstr;
	int		*num_list;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	strstr = (char **)malloc(sizeof(char *) * (wrdcount(s, c) + 1));
	if (!strstr)
		return (NULL);
	int_asigner(s, c, strstr);
	while (strstr[i])
		i++;
	num_list = malloc(sizeof(int) * i);
	i = 0;
	while (strstr[i])
	{
		num_list[i] = ft_atoi(strstr[i]);
		i++;
	}
	return (num_list);
}

t_board	*mount_board(t_board *b)
{
	b = (t_board *)malloc(sizeof(t_board));
	if (!b)
		error_display(0);
	b->a = NULL;
	b->b = NULL;
	b->len = 0;
	b->line = NULL;
	b->split = NULL;
	b->print = 0;
	return (b);
}
