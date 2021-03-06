/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 21:00:32 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/30 21:29:53 by lsuardi          ###   ########.fr       */
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

void	ft_del(void *content)
{
	char	*point;

	point = (char*)content;
	*point = 0;
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
		ft_lstadd_front(&test, ft_lstnew(argv[argc]));
	ft_lstdelone(test, &ft_del);
	ft_lstdisp(test);
	ft_lstfree(test->next);
	return (0);
}
