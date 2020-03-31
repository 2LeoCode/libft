/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 16:45:57 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/27 16:53:40 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    char *test;
    
    if (argc != 3)
        return (0);
    test = ft_strjoin(argv[1], argv[2]);
    printf("%s", test);
    free(test);
    return (0);
}
