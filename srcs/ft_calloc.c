/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 19:40:52 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 17:39:22 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    void    *new;

    if (!(new = malloc(size * count)))
        return NULL;
    ft_bzero(&new, size * count);
    return (new);
}
