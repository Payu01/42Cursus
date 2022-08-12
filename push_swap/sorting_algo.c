/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:30:09 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/12 13:03:28 by fmunoz-a         ###   ########.fr       */
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

static int	get_max_bits(t_list **stack)
{
	t_list	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	head_a = *stack_a;
	size = list_size(head_a);
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *stack_a;
			if (((head_a->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}
