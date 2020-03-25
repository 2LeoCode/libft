/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:22:13 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 23:40:39 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    int *d;
    const int *s;

    d = (int*)dst;
    s = (int*)src;
    if (!n)
        return (dst);
    *d = *s;
    return (ft_memcpy(dst + 1, src + 1, n - 1) - 1);
}
