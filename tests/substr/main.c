/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 16:25:46 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/27 16:29:43 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    char *test;

    if (argc != 4)
        return (0);
    test = ft_substr(argv[1], (unsigned)atoi(argv[2]), (size_t)atoi(argv[3]));
    printf("%s", test);
    free(test);
    return (0);
}
