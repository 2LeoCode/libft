/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:21:56 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 22:43:02 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    int *d;
    const int *s;

    d = (int*)dst;
    s = (int*)src;
    if (!n)
        return NULL;
    if (*d == (unsigned char)c)
        return (dst + sizeof(*dst));
    *d = *s;
    return (ft_memccpy(dst + 1, src + 1, c, n - 1));
}
