/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ordering_actions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:21:14 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/02 17:19:21 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void third_actions(t_stk **a, t_stk **b, int act, t_board *board)
{
	t_stk *tmp;

	tmp = NULL;
	if (c == 7 && list_size(*b) > 1)
	{
		
	}
	else if (c == 8 && list_size(*a) > 1)
}

void second_actions(t_stk **a, t_stk **b, int act, t_board *board)
{
	t_stk *tmp;

	tmp = NULL;
	if(act == 4)
	{
		
	}
	else if(act == 5 && list_size(*b) > 1)
	{
		
	}
	else if(act == 6 && list_size(*b) >1)
	{

	}
	else
		third_actions(a, b, act, board);
}

void	select_action(t_stk **a, t_stk **b, int act, t_board *board)
{
	t_stk	*tmp;

	tmp = NULL;
	if (act == 1)
	{
		ft_putstr_fd("pb\n", board->fd);
		push(a, b, tmp);
		free(tmp);
	}
	else if (act == 2)
	{
		ft_putstr_fd("ra\n", board->fd);
		r(a);
		free(tmp);
	}
	else if (act == 3 && list_size(*a) > 1)
	{
		ft_putstr_fd("rra\n", board->fd);
		rr(a, tmp);
	}
	else
		second_actions(a, b, act, b);
}
