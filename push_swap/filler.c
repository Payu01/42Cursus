/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:50:41 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/07/08 10:12:54 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stk	*fill_stack(t_board *b, char **split, t_stk *tmp)
{
	int	i;

	i = 0;
	while (split[i])
	{
		tmp = malloc(sizeof(t_stk));
		if (!tmp)
			return (NULL);
		tmp->num = ft_atoi(split[i]);
		tmp->nxt = NULL;
		tmp->prv = NULL;
		add_bottom(&b->a, tmp);
		tmp = NULL;
	}
	return (b->a);
}
