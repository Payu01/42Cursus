/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_que_pasa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:16:32 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/07/07 14:52:35 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_stack
{
	int				num;
	struct s_stack	*nxt;
}	t_stk;

void	add_rndm(t_stk *a, int c)
{
	t_stk	*tmp;
	
	while (c > 0)
	{
		tmp = malloc(sizeof(t_stk));
		a->num = rand();
		//printf("%i\n", a->nxt);
		a->nxt = tmp;
		a = tmp;
		c--;
	}
	a->nxt = NULL;
}

int	main(void)
{
	t_stk	*a;
	int		c = 5;

	a = malloc(sizeof(t_stk));
	add_rndm(a, c);
	while (a->nxt)
	{
		printf("%i\n", a->num);
		a = a->nxt;
	}
	return (0);
}
