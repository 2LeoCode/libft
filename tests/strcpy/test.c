/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:44:02 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/25 19:45:04 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     main(int argc, char **argv)
{
    char *test;
    
    if (argc != 3)
        return (0);
    test = (char*)malloc(atoi(argv[1]));
    printf("%s", strcpy(test, argv[2]));
    free(test);
    return (0);
}
