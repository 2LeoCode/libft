/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 15:38:25 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/27 16:13:12 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

char    setzero(unsigned int i, char c)
{
    putchar(i + 48);
    putchar(c);
    return ('0');
}

int     main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    printf("%s", ft_strmapi(argv[1], &setzero));
    return (0);
}
