/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 23:47:18 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/25 00:01:31 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     main(int argc, char **argv)
{
    int     size;
    int     n;
    char    *test;
    
    if (argc != 4)
        return (0);
    size = atoi(argv[1]);
    n = atoi(argv[3]);
    test = (char*)malloc(sizeof(char) * (size + 1));
    test = (char*)memcpy(test, argv[2], n);
    test[n] = 0;
    printf("%s", test);
    free(test);
    return (0);
}
