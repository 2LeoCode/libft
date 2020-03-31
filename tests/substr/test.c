/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 16:29:46 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/27 16:43:17 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     main(int argc, char **argv)
{
    int i;
    size_t j;
    
    if (argc != 4)
        return (0);
    i = 0;
    j = 0;
    if ((size_t)atoi(argv[2]) > strlen(argv[1]))
    {
        printf("(null)");
        return (0);
    }
    while (argv[1][i])
    {
        if (i >= atoi(argv[2]) && j < (size_t)atoi(argv[3]))
        {
            printf("%c", argv[1][i]);
            j++;
        }
        i++;
    }
    return (0);
}
