/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 23:37:59 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/25 00:01:36 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <stdio.h>

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
    test = (char*)ft_memcpy(test, argv[2], n);
    test[n] = 0;
    printf("%s", test);
    return (0);
}
