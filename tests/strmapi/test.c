/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 16:00:04 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/27 16:22:44 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    setzero(char c)
{
    putchar(c);
    return ('0');
}

int     main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc != 2)
        return (0);
    while (argv[1][i])
    {
        putchar(i + 48);
        putchar(argv[1][i]);
        i++;
    }
    i = 0;
    while (argv[1][i++])
        putchar ('0');
    return (0);
}
