/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:23:36 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 22:43:52 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    *dst = *src;
    if (!*src)
        return (0);
    if (!(dstsize - 1))
    {
        *dst = 0;
        return (ft_strlen((char*)src));
    }
    return (1 + ft_strlcpy(dst + 1, src + 1, dstsize - 1));
}
