/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 16:48:40 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/27 16:50:09 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     main(int argc, char **argv)
{
    if (argc != 3)
        return (0);
    printf("%s%s", argv[1], argv[2]);
    return (0);
}
