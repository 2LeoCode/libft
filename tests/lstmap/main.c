/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 22:09:07 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/31 02:18:15 by lsuardi          ###   ########.fr       */
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

void	*ft_disp(void *content)
{
	(void)content;
	return ((void*)"lol");
}

void	ft_del(void *content)
{
	char	*point;

	point = (char*)content;
	*point = 0;
}

int		main(int argc, char **argv)
{
	t_list	*test;
	t_list	*test2;

	if (argc < 2)
		return (0);
	while (--argc)
		ft_lstadd_front(&test, ft_lstnew(argv[argc]));
	test2 = ft_lstmap(test, &ft_disp, &ft_del);
	ft_lstfree(test);
	ft_lstdisp(test2);
	ft_lstfree(test2);
	return (0);
}
