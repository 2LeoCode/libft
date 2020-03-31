/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 14:36:03 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/26 15:04:40 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     main(int argc, char **argv)
{
    size_t n;

    if (argc != 4)
        return (0);
    n = (size_t)atoi(argv[3]);
    printf("%d", strncmp(argv[1], argv[2], n));
    return (0);
}
