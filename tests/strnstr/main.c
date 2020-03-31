/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 14:22:14 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/26 14:25:55 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    size_t size;

    if (argc != 4)
        return (0);
    size = (size_t)atoi(argv[3]);
    printf("%s", ft_strnstr(argv[1], argv[2], size));
    return (0);
}
