/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 23:57:48 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/26 01:02:54 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     main(int argc, char **argv)
{  
    char test[50];

    *test = 0;
    if (argc != 4)
        return (0);
    strcat(test, argv[1]);
    printf("%zu ", strlcat(test, argv[2], atoi(argv[3])));
    printf("%s", test);
    return (0);
}
