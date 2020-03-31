/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 00:20:13 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/30 00:37:24 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		main(int argc, char **argv)
{
	int i;

	if (argc != 3)
		return (0);
	i = 0;
	if (!strncmp(argv[1], argv[2], strlen(argv[2])))
		i += (int)strlen(argv[2]);
	while (argv[1][i])
	{
		if (!strncmp(&argv[1][i], argv[2], strlen(argv[2])) && strlen(&argv[1][i]) == strlen(argv[2]))
			return (0);
		putchar(argv[1][i]);
		i++;
	}
	return (0);
}
