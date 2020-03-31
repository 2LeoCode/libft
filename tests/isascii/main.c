/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 15:19:35 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/26 15:33:10 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    printf("%d", ft_isascii((int)argv[1][0]));
    return (0);
}
