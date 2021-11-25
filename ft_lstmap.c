/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:42:56 by athirion          #+#    #+#             */
/*   Updated: 2021/11/25 09:46:42 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*copy;
	t_list	*new_element;

	copy = NULL;
	if (del && *f && lst)
	{
		while (lst)
		{
			new_element = ft_lstnew((*f)(lst->content));
			if (!new_element)
			{
				ft_lstclear(&copy, (*del));
				return (NULL);
			}
			ft_lstadd_back(&copy, new_element);
			lst = lst->next;
		}
	}
	return (copy);
}	
