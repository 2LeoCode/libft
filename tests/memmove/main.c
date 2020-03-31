/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 00:45:34 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/25 01:00:53 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <stdio.h>

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
    tab = (char*)ft_memmove(tab, argv[2], n);
    printf("%s", tab);
    free(tab);
    return (0);
}
