/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:15:37 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/07/14 10:23:57 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_checker(t_stk **a, int len)
{
	t_stk	*tmp;

	if (list_size(*a) != len)
		return (0);
	tmp = *a;
	while (tmp && tmp->nxt)
	{
		if (tmp->nxt != NULL && (tmp->num < tmp->nxt->num))
			tmp = tmp->nxt;
		else
			return (0);
	}
	return (1);
}

void	check_dup(char **argv)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	while (argv[i])
	{
		dup = ft_strdup(argv[i]);
		j = 0;
		while (argv[j])
		{
			if (j == i)
				j++;
			else if (ft_strcmp(dup, argv[i]) == 0)
			{
				free(&dup);
				error_display(1);
			}
			else
				j++;
		}
		free(&dup);
		i++;
	}
}

void	check_num(char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (!argv[0])
		error_display(2);
	while (argv[i])
	{
		j = 0;
		if (!(argv[i] >= INT_MIN && argv[i] <= INT_MAX))
			error_display(2);
		while (argv[i][j])
		{
			if (ft_isalpha(argv[j]) == 1 || argv[i][j] == '.'
			|| ((argv[i][j]) == '-' && (argv[i][j +1]) == '\0')
			|| ((argv[i][j]) == '+' && argv[i][j + 1]) == '\0')
				error_display(2);
			j++;
		}
		i++;
	}
}