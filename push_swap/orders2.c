/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orders2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:52:36 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/16 20:26:49 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stk	*rr_swap(t_stk *stk, t_stk *tmp)
{
	while (stk->nxt)
		stk = stk->nxt;
	tmp->num = stk->num;
	tmp->nxt = NULL;
	tmp->prv = NULL;
	return (tmp);
}

void	free_bottom(t_stk **stk)
{
	while ((*stk))
	{
		if ((*stk)->nxt->nxt == NULL)
			break ;
		*stk = (*stk)->nxt;
	}
	free((*stk)->nxt);
	(*stk)->nxt = NULL;
}

void	rr(t_stk **stk, t_stk *tmp)
{
	t_stk	*a;

	a = NULL;
	tmp = NULL;
	if (*stk)
	{
		tmp = (t_stk *)malloc(sizeof(t_stk));
		if (tmp == NULL)
			return ;
		tmp = rr_swap(*stk, tmp);
		a = *stk;
		free_bottom(stk);
		*stk = a;
		add_top(stk, tmp);
	}
}

void	add_exs(t_stk **stk)
{
	t_stk	*tmp1;
	t_stk	*tmp2;

	tmp1 = NULL;
	tmp1 = *stk;
	tmp2 = (*stk)->prv;
	while (tmp1->nxt)
		tmp1 = tmp1->nxt;
	tmp1->nxt = tmp2;
	tmp1->nxt->prv = tmp1;
	tmp1->nxt->nxt = NULL;
}

void	r(t_stk **stk)
{
	if (*stk)
	{
		*stk = (*stk)->nxt;
		add_exs(stk);
	}
}
