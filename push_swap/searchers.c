/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:34:04 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/10 16:15:41 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search_base(t_stk *stk, int num, int option)
{
	int	i;

	i = 1;
	if (option == 1)
	{
		while (stk)
		{
			if (stk->num <= num)
				return (i);
			stk = stk->nxt;
		}
	}
	if (option == 2)
	{
		while (stk)
		{
			if (stk->num >= num)
				return (i);
			stk = stk->nxt;
			i++;
		}
	}
	return (-1);
}

int	ftoi(float num)
{
	int	tmp;

	tmp = (int)num;
	if ((num - tmp) >= 0.5)
		return ((int)num + 1);
	else
		return ((int)num);
}

int	search_pivot(t_stk *stk)
{
	t_stk	*tmp;
	int		len;
	int		pvt;

	pvt = 0;
	len = 0;
	tmp = NULL;
	len = list_size(stk);
	tmp = sorter(stk);
	if (len <= 10)
		pvt = ftoi(len / 2);
	else if (len > 10 && len < 200)
		pvt = ftoi(len / 4);
	else if (len >= 200)
		pvt = ftoi(len / 8);
	return (lst_nbr(&tmp, pvt));
}

int	search_max(t_stk *stk)
{
	t_stk	*tmp;
	int		max;

	tmp = stk;
	max = tmp->num;
	while (tmp->nxt)
	{
		if (tmp->num > max)
			max = tmp->num;
		tmp = tmp->nxt;
	}
	return (max);
}

int	search_min(t_stk *stk)
{
	t_stk	*tmp;
	int		min;

	tmp = stk;
	min = tmp->num;
	while (tmp->nxt)
	{
		if (tmp->num < min)
			min = tmp->num;
		tmp = tmp->nxt;
	}
	return (min);
}
