/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:47:31 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/26 01:02:59 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     main(int argc, char **argv)
{
    char    *test;
    int     len;

    if (argc != 4)
        return (0);
    len = atoi(argv[3]);
    test = (char*)malloc(sizeof(char) * (strlen(argv[1]) + 20));
    strcpy(test, argv[1]);
    printf("%zu ", ft_strlcpy(test, argv[2], len));
    printf("%s", test);
    free(test);
    return (0);
}
