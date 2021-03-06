/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 23:54:58 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/26 01:10:38 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     main(int argc, char **argv)
{
    int     size;
    int     n;
    char    *test;
    char    *ret;
    
    if (argc != 5)
        return (0);
    size = atoi(argv[1]);
    n = atoi(argv[4]);
    test = (char*)malloc(sizeof(char) * size);
    ret = (char*)ft_memccpy(test, argv[2], (int)argv[3][0], n);
    printf("%s", test);
    printf("%s", ret);
    free(test);
    return (0);
}
