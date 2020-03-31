/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 18:27:45 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/25 19:04:35 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    size_t n;

    if (argc != 4)
        return (0);
    n = (size_t)atoi(argv[1]);
    printf("%d", memcmp(argv[2], argv[3], n));
    return (0);
}
