/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 02:15:37 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 02:47:47 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list  *ft_lstlast(t_list *lst)
{
    if (!lst || !lst->next)
        return (lst);
    return (ft_lstlast(lst->next));
}
