/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:50:41 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/15 11:34:57 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stk	*get_min_indx(t_stk **stk)
{
	t_stk	*tmp;
	t_stk	*min;
	int		has_min;

	tmp = *stk;
	has_min = 0;
	min = NULL;
	if (tmp)
	{
		while (tmp)
		{
			if ((tmp->index == -1) && (!has_min || tmp->num < min->num))
			{
				min = tmp;
				has_min = 1;
			}
			tmp = tmp->nxt;
		}
	}
	return (min);
}

void	index_asigner(t_stk **stk)
{
	t_stk	*tmp;
	int		index;

	index = 0;
	tmp = get_min_indx(stk);
	while (tmp)
	{
		tmp->index = index++;
		tmp = get_min_indx(stk);
	}
}

t_stk	*fill_stack(t_board *b, int *split, t_stk *tmp)
{
	int	i;

	i = -1;
	while (split[++i])
	{
		tmp = malloc(sizeof(t_stk));
		if (!tmp)
			return (NULL);
		tmp->num = split[i];
		tmp->index = -1;
		tmp->nxt = NULL;
		tmp->prv = NULL;
		add_bottom(&b->a, tmp);
		tmp = NULL;
	}
	return (b->a);
}
