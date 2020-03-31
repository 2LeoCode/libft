/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:18:33 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/25 19:47:35 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    char *test;

    if (argc != 2)
        return (0);
    if (!(test = ft_strdup(argv[1])))
    {
        printf("Echec");
        return (0);
    }
    printf("%s", test);
    return (0);
}
