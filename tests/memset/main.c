/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 21:41:23 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 22:55:20 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    char    *test;
    size_t  size;

    size = (size_t)atoi(argv[2]);
    if (argc != 3)
        return (0);
    test = (char*)malloc(sizeof(char) * (size + 1));
    test = (char*)ft_memset(test, argv[1][0], size);
    test[size] = 0;
    printf("%s", test);
    free(test);
    return (0);
}
