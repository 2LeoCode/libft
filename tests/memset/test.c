/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 21:41:30 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 23:50:05 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    int size;

    if (argc != 3)
        return (0);
    size = atoi(argv[2]) + 1;
    while (--size)
        putchar(argv[1][0]);
    return (0);
}
