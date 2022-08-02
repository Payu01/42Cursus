/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:56:20 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/05/02 13:26:24 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*nxtpos;
	t_list	*oldpos;

	if (!lst)
		return (NULL);
	newlst = ft_lstnew((*f)(lst->content));
	if (!newlst)
		return (NULL);
	nxtpos = newlst;
	oldpos = lst->next;
	while (oldpos)
	{
		nxtpos->next = ft_lstnew((*f)(oldpos->content));
		if (!newlst)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		nxtpos = nxtpos->next;
		oldpos = oldpos->next;
	}
	return (newlst);
}
