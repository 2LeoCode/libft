/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 18:23:14 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/25 19:07:03 by lsuardi          ###   ########.fr       */
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
    n = (size_t)atoi(argv[1]);
    printf("%d", ft_memcmp(argv[2], argv[3], n));
    return (0);
}
