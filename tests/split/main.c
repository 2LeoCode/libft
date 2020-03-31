/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 00:47:10 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/30 01:55:05 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	**test;
	int		size;
	int		i;

	if (argc != 4)
		return (0);
	i = 0;
	size = atoi(argv[3]);
	test = ft_split(argv[1], *argv[2]);
	while (i < size)
	{
		printf("%s", test[i]);
		free(test[i]);
		i++;
	}
	free(test);
	return (0);
}