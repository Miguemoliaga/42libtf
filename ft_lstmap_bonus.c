/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:57:19 by mmartine          #+#    #+#             */
/*   Updated: 2021/10/20 20:01:12 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	first = ft_lstnew((*f)(lst->content));
	if (!first)
		return (NULL);
	new = first;
	lst = lst->next;
	while (lst)
	{
		new->next = ft_lstnew((*f)(lst->content));
		if (!(new->next))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		lst = lst->next;
		new = new->next;
	}
	new->next = NULL;
	return (first);
}
