/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 00:54:07 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/25 00:54:35 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    char    *tab;
    int     size;
    size_t  n;
    
    if (argc != 4)
        return (0);
    size = atoi(argv[1]);
    n = (size_t)atoi(argv[3]);
    tab = (char*)malloc(sizeof(char) * size);
    tab = (char*)memmove(tab, argv[2], n);
    printf("%s", tab);
    free(tab);
    return (0);
}
