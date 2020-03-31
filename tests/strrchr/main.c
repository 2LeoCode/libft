/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 01:12:24 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/26 01:30:36 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    if (argc != 3)
        return (0);
    printf("%s", ft_strrchr(argv[1], *argv[2]));
    return (0);
}
