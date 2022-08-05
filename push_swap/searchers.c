/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:34:04 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/05 11:00:34 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//int	search_pivot()

int	search_max(t_stk **stk)
{
	t_stk	*tmp;
	int		max;

	tmp = *stk;
	max = tmp->num;
	while (tmp->nxt)
	{
		if (tmp->num > max)
			max = tmp->num;
		tmp = tmp->nxt;
	}
	return (max);
}

int	search_min(t_stk **stk)
{
	t_stk	*tmp;
	int		min;

	tmp = *stk;
	min = tmp->num;
	while (tmp->nxt)
	{
		if (tmp->num < min)
			min = tmp->num;
		tmp = tmp->nxt;
	}
	return (min);
}
