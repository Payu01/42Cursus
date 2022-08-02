/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:01:43 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/05/02 10:12:31 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*templst;

	i = 0;
	templst = lst;
	while (templst != NULL)
	{
		templst = templst->next;
		i++;
	}
	return (i);
}
