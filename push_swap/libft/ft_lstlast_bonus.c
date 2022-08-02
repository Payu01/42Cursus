/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:54:43 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/05/11 15:13:02 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmplst;

	if (!lst)
		return (0);
	tmplst = lst;
	while (tmplst != NULL && tmplst->next != NULL)
		tmplst = tmplst->next;
	return (tmplst);
}
