/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:49:25 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/02 12:20:22 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stk **a, t_stk **b, int len, t_board *b)
{
	t_stk *tmp;
	int min;

	tmp = get_to_bottom(a);
	min = search_min(a);
	while (sort_checker(a, len) == 0)
	{
		if((*a)->num, (*a)->nxt->num && tmp->num == min)
			
	}
}
