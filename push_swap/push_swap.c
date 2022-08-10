/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:02:50 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/10 15:39:03 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_args(t_board *board, char **argv)
{
	board->fd = 1;
	board->split = int_split(argv[1], ' ');
	return (board->split);
}

void	swapping_time(t_board *board, int argc, char **argv)
{
	t_stk	*stk;

	stk = NULL;
	board->split = fill_args(board, argv);
	check_dup(board->split);
	//check_num(board->split);
	board->a = fill_stack(board, board->split, stk);
	if (sort_checker(&board->a, list_size(board->a)) == 1)
		error_display(2);
	board->len = list_size(board->a);
	//free_stk(&stk);
	if (board->len <= 10)
		short_sort(board, &(board->a), &(board->b), board->len);
	if (argc == 2 || (argc == 3 && board->fd != 1))
		//free_array(board->split);
	close(board->fd);
}

int	main(int argc, char **argv)
{
	t_board	*board;

	board = NULL;
	if (argc < 2)
		error_display(2);
	else
	{
		board = mount_board(board);
		swapping_time(board, argc, argv);
		free(board);
		board = NULL;
	}
}
