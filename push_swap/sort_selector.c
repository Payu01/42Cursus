/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_selector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:33:48 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/05 11:05:19 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	short_sort(t_board *board, t_stk **a, t_stk **b, int len)
{
	t_stk	*tmp;

	tmp = NULL;
	if (len == 2 && (*a)->num > (*a)->nxt->num)
		select_action(a, b, 1, board);
	if (len <= 3)
		sort_3(a, b, len, board);
/* 	else if (len > 3)
	{
		
	} */
}
