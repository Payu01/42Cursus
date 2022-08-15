/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:15:37 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/15 08:57:03 by fmunoz-a         ###   ########.fr       */
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

/* int	get_current_order(t_stk *a, t_stk *b, char c)
{
	int	len;
	int	cnt;

	cnt = 0;
	len = 0;
	while (c == 'a' && a)
	{
		if (a->num == len)
			cnt++;
		else
			cnt = 0;
		len++;
		a = a->nxt;
	}
	len = list_size(b) - 1;
	while (c == 'b' && b)
	{
		if (b->num == len)
			cnt++;
		else
			cnt = 0;
		len--;
		b = b->nxt;
	}
	return (cnt);
} */

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
