/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 20:00:42 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/30 20:46:37 by lsuardi          ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	t_list *test;

	if (argc < 2)
		return (0);
	while (--argc)
		ft_lstadd_back(&test, ft_lstnew(argv[argc]));
	printf("%s", (char*)ft_lstlast(test)->content);
	ft_lstfree(test);
	return (0);
}
