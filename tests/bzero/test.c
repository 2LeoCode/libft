/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 23:06:04 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/25 00:00:04 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    int size;
    
    if (argc != 2)
        return (0);
    size = atoi(argv[1]);
    if (size < 0)
        return (0);
    while (size--)
        putchar('0');
    return (0);
}
