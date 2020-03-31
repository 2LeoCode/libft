/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:40:00 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/25 19:43:56 by lsuardi          ###   ########.fr       */
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
    test = (char*)malloc(atoi(argv[1]));
    printf("%s", ft_strcpy(test, argv[2]));
    free(test);
    return (0);
}
