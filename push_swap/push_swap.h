/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:04:41 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/05 12:38:15 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include "libft.h"

typedef struct s_stack
{
	int				num;
	struct s_stack	*nxt;
	struct s_stack	*prv;
}	t_stk;

typedef struct s_board
{
	char	*line;
	char	**split;
	char	**av;
	int		ac;
	int		len;
	int		print;
	int		color;
	int		fd;
	t_stk	*a;
	t_stk	*b;
}	t_board;

void	error_display(int i);
t_board	*mount_board(t_board *b);
t_stk	*fill_stack(t_board *b, char **split, t_stk *tmp);
int		list_size(t_stk *a);
void	free_stk(t_stk **stk);
void	add_bottom(t_stk **top, t_stk *new);
void	add_top(t_stk **top, t_stk *new);
void	swap(t_stk **stk);
void	push(t_stk **a, t_stk **b, t_stk *tmp);
t_stk	*rr_swap(t_stk *stk, t_stk *tmp);
void	free_bottom(t_stk **stk);
void	rr(t_stk **stk, t_stk *tmp);
void	r(t_stk **stk);
void	add_exs(t_stk **stk);
void	check_dup(char **argv);
void	check_num(char **argv);
void	add_exs(t_stk **stk);
t_stk	*get_to_bottom(t_stk **stk);
int		sort_checker(t_stk **a, int len);
void	short_sort(t_board *board, t_stk **a, t_stk **b, int len);
int		search_min(t_stk **stk);
int		search_max(t_stk **stk);
void	select_action(t_stk **a, t_stk **b, int act, t_board *board);
void	second_actions(t_stk **a, t_stk **b, int act, t_board *board);
void	third_actions(t_stk **a, t_stk **b, int act, t_board *board);
void	sort_3(t_stk **a, t_stk **b, int len, t_board *board);
void	sort_3_actions(t_stk **a, t_stk **b, int act, t_board *board);
void	sort_over_3(t_stk **a, t_stk **b, int len, t_board *board);
void	smart_selector(t_stk **a, t_stk **b, t_board *board, int min);

#endif