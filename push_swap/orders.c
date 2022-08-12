/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orders.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:52:07 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/12 10:03:33 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stk **stk)
{
	int		i;
	int		j;

	if ((*stk) && (*stk)->nxt)
	{
		i = (*stk)->num;
		j = (*stk)->nxt->num;
		(*stk)->num = j;
		(*stk)->nxt->num = i;
	}
}

void	push(t_stk **giver, t_stk **receiver, t_stk *tmp)
{
	tmp = NULL;
	if (*receiver == NULL && *giver)
	{
		*receiver = (t_stk *)malloc(sizeof(t_stk));
		(*receiver)->prv = NULL;
		(*receiver)->num = (*giver)->num;
		(*receiver)->nxt = NULL;
		(*giver) = (*giver)->nxt;
		(*giver)->prv = NULL;
	}
	else
	{
		if (*giver)
		{
			tmp = (t_stk *)malloc(sizeof(t_stk));
			tmp->num = (*giver)->num;
			tmp->nxt = NULL;
			tmp->prv = NULL;
			add_top(receiver, tmp);
			(*giver) = (*giver)->nxt;
		}
	}
}

t_stk	*get_to_bottom(t_stk *stk)
{
	t_stk	*tmp;

	tmp = stk;
	while ((tmp)->nxt)
		(tmp) = (tmp)->nxt;
	return (tmp);
}
