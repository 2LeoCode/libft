/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 02:08:10 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 18:57:13 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

t_list  *ft_lstnew(void *content)
{
    t_list  *new;

    if (!(new = malloc(sizeof(t_list))))
        return NULL;
    new->content = content;
    new->next = NULL;
    return (new);
}