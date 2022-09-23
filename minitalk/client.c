/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:36:13 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/09/21 17:53:50 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	sms(int pid, char *msg)
{
	int	delay;
	int	pos;
	int	i;
	int	len;

	delay = 69;
	len = ft_strlen(msg);
	i = -1;
	while (++i < len)
	{
		pos = -1;
		while (++pos < 7)
		{
			if ((msg[i] >> pos) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(delay);
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr_fd("Error\n", 1);
		exit(1);
	}
	sms(ft_atoi(argv[1]), argv[2]);
	return (0);
}
