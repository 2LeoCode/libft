/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 19:39:31 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/30 19:39:50 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	while (--argc)
		printf("%s", argv[argc]);
	return (0);
}