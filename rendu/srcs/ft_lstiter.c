/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 02:39:16 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/27 17:35:45 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	(*f)(lst->content);
	ft_lstiter(lst->next, f);
}
