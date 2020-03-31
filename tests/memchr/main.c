/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 17:59:46 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/25 18:02:14 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <string.h>

int     main(int argc, char **argv)
{
    if (argc != 3)
        return (0);
    printf("%s", ft_memchr(argv[1], argv[2][0], strlen(argv[1])));
}
