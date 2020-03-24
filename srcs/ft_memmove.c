/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:22:19 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 23:06:22 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char*)dst;
    s = (unsigned char*)src;
    *d = 0;
    if (!*d || !*s || !len)
        return (dst);
    *d = *s;
    return (ft_memmove(dst + 1, src + 1, len - 1) - 1);
}
