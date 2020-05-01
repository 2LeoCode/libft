/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 02:30:28 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/30 21:32:46 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;

	if (!*lst)
		return ;
	head = (*lst)->next;
	ft_lstdelone(*lst, del);
	*lst = NULL;
	ft_lstclear(&head, del);
}
