/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:35:58 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/09/22 15:09:48 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	writer(int signal)
{
	static char	c = 0;
	static int	pos = 0;
	int			bn;

	if (signal == SIGUSR1)
		bn = 1;
	else if (signal == SIGUSR2)
		bn = 0;
	else
		exit(EXIT_SUCCESS);
	c += bn << pos++;
	if (pos == 7)
	{
		if (!c)
			ft_putchar_fd('\n', 1);
		ft_putchar_fd(c, 1);
		c = 0;
		pos = 0;
	}
}

int	main(void)
{
	ft_putstr_fd("Initialized server: PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	while (1)
	{
		signal(SIGUSR1, writer);
		signal(SIGUSR2, writer);
		pause();
	}
	return (0);
}
