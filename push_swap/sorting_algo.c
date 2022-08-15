/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:30:09 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/15 13:18:25 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	radix_sort(t_stk **a, t_stk **b, int right_shift, t_board *board)
{
	int	i;
	int	len;
	int	limit;
	int	max_len;

	max_len = board->len;
	if (right_shift > max_len || sort_checker(a, board->len))
	{
		while (list_size(*b))
			select_action(a, b, 3, board);
		return ;
	}
	i = -1;
	len = list_size(*a);
	limit = get_current_order(*a, *b, 'a');
	while (++i < len - limit && !sort_checker(a, board->len))
	{
		if ((*a)->num >> right_shift & 1)
			select_action(b, a, 4, board);
		else
			select_action(a, b, 5, board);
	}
	i = -1;
	len = list_size(*b);
	while (++i < len - get_current_order(*a, *b, 'b'))
		select_action(a, b, 3, board);
	return (radix_sort(a, b, right_shift + 1, board));
} */

void	printlist(t_stk **list_a)
{
	int	a;

	while (list_a)
	{
		if (list_a)
		{
			if (list_a)
				a = (*list_a)->index;
			(*list_a) = (*list_a)->nxt;
		}
		else
			a = 0;
		printf(" %d \n", a);
	}
}

static int	get_max_bits(t_stk **stack)
{
	t_stk	*tmp;
	int		max;
	int		max_bits;

	tmp = *stack;
	max = tmp->index;
	max_bits = 0;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->nxt;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stk **stka, t_stk **stkb, t_board *board)
{
	t_stk	*a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	a = *stka;
	size = list_size(a);
	max_bits = get_max_bits(stka);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			a = *stka;
			if (((a->index >> i) & 1) == 1)
				select_action(stka, stkb, 5, board);
			else
				select_action(stka, stkb, 4, board);
		}
		while (list_size(*stkb) != 0)
			select_action(stka, stkb, 3, board);
		i++;
	}
}
