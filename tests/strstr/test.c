/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 14:11:38 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/26 14:12:09 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int     main(int argc, char **argv)
{
    if (argc != 3)
        return (0);
    printf("%s", strstr(argv[1], argv[2]));
    return (0);
}
