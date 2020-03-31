/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:20:57 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/25 19:21:11 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int     main(int argc, char **argv)
{
    char *test;

    if (argc != 2)
        return (0);
    if (!(test = strdup(argv[1])))
    {
        printf("Echec");
        return (0);
    }
    printf("%s", test);
    return (0);
}
