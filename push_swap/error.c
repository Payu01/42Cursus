/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:55:06 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/07/14 12:35:05 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h";

void	error_display(int i)
{
	if (i == 0)
		ft_printf("Error\n");
	else if (i == 1)
		ft_printf("Error: duplicate numbers\n");
	else if (i == 2)
		ft_printf("Error: invalid arguments\n");
	exit(EXIT_SUCCESS);
}
