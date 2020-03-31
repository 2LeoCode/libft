/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 21:05:58 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/30 21:27:46 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(int argc, char **argv)
{
	int i;

	if (argc < 2)
		return (0);
	i = 1;
	while (++i < argc)
		printf("%s", argv[i]);
	return (0);
}