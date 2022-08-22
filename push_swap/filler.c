/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:50:41 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/17 10:22:03 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stk	*fill_stack(t_board *b, char **split, t_stk *tmp)
{
	int	i;

	i = -1;
	while (split[++i])
	{
		tmp = malloc(sizeof(t_stk));
		if (!tmp)
			return (NULL);
		tmp->num = ft_atoll(split[i]);
		tmp->index = -1;
		tmp->nxt = NULL;
		tmp->prv = NULL;
		add_bottom(&b->a, tmp);
		tmp = NULL;
	}
	tmp = b->a;
	index_stack(&tmp);
	b->a = tmp;
	return (b->a);
}
