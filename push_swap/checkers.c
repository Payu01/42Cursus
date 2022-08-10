/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:15:37 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/10 14:45:10 by fmunoz-a         ###   ########.fr       */
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

void	check_dup(int *argv)
{
	int		i;
	int		j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (argv[i] == argv[j])
				error_display(1);
			j++;
		}
		i++;
	}
}

/* void	check_num(int *argv)
{
	int	i;
	int	j;

	i = -1;
	if (!argv[0])
		error_display(2);
	while (argv[++i])
	{
		j = -1;
		if (!(ft_atoi(argv[i]) >= INT_MIN && ft_atoi(argv[i]) <= INT_MAX))
			error_display(2);
		while (argv[++i][++j])
		{
			if (argv[i][j] == 1 || argv[i][j] == '.'
			|| ((argv[i][j]) == '-' && (argv[i][j +1]) == '\0')
			|| ((argv[i][j]) == '+' && argv[i][j + 1]) == '\0')
				error_display(2);
		}
	}
} */
