/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 23:07:04 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 23:59:49 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    size_t  size;
    char    *test;
    size_t  i;

    if (argc != 2)
        return (0);
    i = 0;
    size = atoi(argv[1]);
    test = (char*)malloc(sizeof(char) * (size + 1));
    while (i < size)
        test[i++] = 't';
    test[i] = 0;
    ft_bzero(test, size);
    while (i)
        printf("%d", test[size - i--]);
    free(test);
    return (0);
}
