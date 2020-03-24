/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 02:41:15 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 18:56:34 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *head;

    if (!(new = ft_lstnew((*f)(lst->content))))
        return NULL;
    lst = lst->next;
    head = new;
    while (lst)
    {
        ft_lstadd_back(&new, (*f)(lst->content));
        if (!(head = head->next))
        {
            ft_lstclear(&new, del);
            return NULL;
        }
        lst = lst->next;
    }
    return (new);
}
