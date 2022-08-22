/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:28:16 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/22 13:11:04 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	do_action1(char *line, t_stk **a, t_stk **b)
{
	t_stk	*tmp;

	tmp = NULL;
	if (!(ft_strcmp(line, "sa")))
	{
		swap(a);
		return (0);
	}
	if (!(ft_strcmp(line, "sb")))
	{
		swap(b);
		return (0);
	}
	if (!(ft_strcmp(line, "ss")))
	{
		swap(a);
		swap(b);
		return (0);
	}
	if (!(ft_strcmp(line, "pa")))
	{
		push(a, b, tmp);
		return (0);
	}
	do_action2(line, a, b);
}

int	do_action2(char *line, t_stk **a, t_stk **b)
{
	t_stk	*tmp;

	tmp = NULL;
	if (!(ft_strcmp(line, "pb")))
	{
		push(b, a, tmp);
		return (0);
	}
	if (!(ft_strcmp(line, "ra")))
	{
		r(a);
		return (0);
	}
	if (!(ft_strcmp(line, "rb")))
	{
		r(b);
		return (0);
	}
	if (!(ft_strcmp(line, "rr")))
	{
		r(a);
		r(b);
		return (0);
	}
	do_action3(line, a, b);
}

int	do_action3(char *line, t_stk **a, t_stk **b)
{
	t_stk	*tmp;

	tmp = NULL;
	if (!(ft_strcmp(line, "rra")))
	{
		rr(a, tmp);
		return (0);
	}
	if (!(ft_strcmp(line, "rrb")))
	{
		rr(b, tmp);
		return (0);
	}	
	if (!(ft_strcmp(line, "rrr")))
	{
		rr(a, tmp);
		rr(b, tmp);
		return (0);
	}
	return (1);
}

void	initialize_checker_stacks(t_board *board, int argc, char **argv)
{
	t_stk	*stk;

	stk = NULL;
	board->split = fill_args(board, argv, argc);
	check_dup(board->split);
	check_numbers(board->split);
	board->a = fill_stack(board, board->split, stk);
}

int	main(int argc, char **argv)
{
	t_board	*board;
	char	*line;

	board = NULL;
	if (argc < 2)
		return (0);
	mount_board(board);
	initialize_checker_stacks(board, argc, argv);
	while (get_next_line(0, &line))
	{
		if (do_action1(line, &(board->a), &(board->b)))
		{
			error_display();
			return (-1);
		}
		free(line);
	}
	if (sort_checker(&(board->a), list_size(board->a)))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	free(board);
	return (0);
}
