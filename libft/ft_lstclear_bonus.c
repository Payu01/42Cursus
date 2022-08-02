/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:29:01 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/05/02 11:40:59 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmplst;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		tmplst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmplst;
	}
}
