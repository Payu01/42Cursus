/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:55:06 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/08/05 10:55:23 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_display(int i)
{
	if (i == 0)
		ft_putstr_fd("Error\n", 1);
	else if (i == 1)
		ft_putstr_fd("Error: duplicate numbers\n", 1);
	else if (i == 2)
		ft_putstr_fd("Error: invalid arguments\n", 1);
	exit(EXIT_SUCCESS);
}
