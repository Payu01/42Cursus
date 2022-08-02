/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 09:28:32 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/06/30 09:43:03 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int rep;
	char c;

	i = 0;
	rep = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] && (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
				rep = ((argv[1][i] + '0') - ('a' + '0')) + 1;
			else if(argv[1][i] && (argv[1][i] >= 'A' && argv[1][i] <= 'A'))
				rep = ((argv[1][i] + '0') - ('A' + '0')) + 1;
			else if(argv[1][i])
				write(1, &argv[1][i], 1);
			while(rep > 0)
			{
				write(1, &argv[1][i], 1);
				rep--;
			}
			i++;
		}
	}

	write(1, "\n", 1);
	return (0);
}
