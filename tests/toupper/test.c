/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 16:02:32 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/26 16:06:17 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int     main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    printf("%c", (char)toupper((int)*argv[1]));
    return (0);
}
