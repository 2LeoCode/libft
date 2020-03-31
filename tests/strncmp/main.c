/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 14:33:54 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/26 14:35:56 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    size_t n;

    if (argc != 4)
        return (0);
    n = (size_t)atoi(argv[3]);
    printf("%d", ft_strncmp(argv[1], argv[2], n));
    return (0);
}
