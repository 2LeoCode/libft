/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 17:35:15 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/30 00:41:47 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*test;

	if (argc != 3)
		return (0);
	test = ft_strtrim(argv[1], argv[2]);
	printf("%s", test);
	free(test);
	return (0);
}
