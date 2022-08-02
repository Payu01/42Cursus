/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:50:32 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/05/02 12:33:13 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmplst;

	if (!lst)
		return ;
	tmplst = lst;
	while (tmplst != NULL)
	{
		(*f)(tmplst->content);
		tmplst = tmplst->next;
	}
}
