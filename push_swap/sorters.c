/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:49:25 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/03 10:17:35 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3_actions(t_stk **a, t_stk **b, int act, t_board *board)
{
	select_action(a, b, 1, board);
	select_action(a, b, act, board);
}

void	sort_3(t_stk **a, t_stk **b, int len, t_board *board)
{
	t_stk	*tmp;
	int		min;

	tmp = get_to_bottom(a);
	min = search_min(a);
	while (sort_checker(a, len) == 0)
	{
		if ((*a)->num < (*a)->nxt->num && tmp->num == min)
			select_action(a, b, 7, board);
		else if ((*a)->num > (*a)->nxt->num && tmp->num == min)
			sort_3_actions(a, b, 7, board);
		else if ((*a)->nxt->num == min)
		{
			if ((*a)->num < tmp->num)
				select_action(a, b, 1, board);
			else if ((*a)->num > tmp->num)
				select_action(a, b, 5, board);
		}
		else if ((*a)->num == min && (*a)->nxt->num > tmp->num)
			sort_3_actions(a, b, 5, board);
	}
}
