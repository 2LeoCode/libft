/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 02:41:15 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 02:54:23 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;

    new = ft_lstnew((*f)(lst->content));
    lst = lst->next;
    while (lst)
    {
        ft_lstadd_back(&new, (*f)(lst->content));
        lst = lst->next;
    }
    return (new);
}
