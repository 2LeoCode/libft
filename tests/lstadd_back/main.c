/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 19:39:10 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/30 19:39:18 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

void	ft_lstfree(t_list *lst)
{
	t_list *head;

	if (!lst)
		return ;
	head = lst->next;
	free(lst);
	ft_lstfree(head);
}

void	ft_lstdisp(t_list *lst)
{
	if (!lst)
		return ;
	printf("%s", (char*)lst->content);
	ft_lstdisp(lst->next);
}

int		main(int argc, char **argv)
{
	t_list *test;

	if (argc < 2)
		return (0);
	while (--argc)
		ft_lstadd_back(&test, ft_lstnew(argv[argc]));
	ft_lstdisp(test);
	ft_lstfree(test);
	return (0);
}
