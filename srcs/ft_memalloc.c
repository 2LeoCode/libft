/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:21:53 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 18:21:53 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void    *ft_memalloc(size_t size)
{
    void *tmp;
    char *init;

    if (!(tmp = malloc(size)))
        return (NULL);
    init = (char*)tmp;
    while (--size >= 0)
        init[size] = 0;
    return (tmp);
}
