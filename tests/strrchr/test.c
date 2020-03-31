/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 01:14:27 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/26 01:30:39 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int     main(int argc, char **argv)
{
    if (argc != 3)
        return (0);
    printf("%s", strrchr(argv[1], *argv[2]));
    return (0);
}
