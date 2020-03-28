/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 02:30:28 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/27 17:33:38 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev;
	t_list	*head;

	prev = (*lst)->next;
	head = prev->next;
	ft_lstdelone(*lst, del);
	*lst = NULL;
	while (prev)
	{
		ft_lstdelone(prev, del);
		prev = head;
		head = head->next;
	}
}
