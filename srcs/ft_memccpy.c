/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:21:56 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/25 00:39:08 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    char *d;
    const char *s;

    d = (char*)dst;
    s = (char*)src;
    if (!n)
        return NULL;
    *d = *s;
    if ((unsigned char)*d == (unsigned char)c)
    {
        d[1] = 0;
        return (dst + 1);
    }
    return (ft_memccpy(dst + 1, src + 1, c, n - 1));
}
