/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 18:16:50 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/30 18:24:17 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_list *test;

	if (argc != 2)
		return (0);
	test = ft_lstnew(argv[1]);
	printf("%s", (char*)test->content);
	free(test);
	return (0);
}
