/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mount_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:08:29 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/05 10:56:53 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_board	*mount_board(t_board *b)
{
	b = (t_board *)malloc(sizeof(t_board));
	if (!b)
		error_display(0);
	b->a = NULL;
	b->b = NULL;
	b->len = 0;
	b->line = NULL;
	b->split = NULL;
	b->print = 0;
	return (b);
}
