/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:23:57 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 18:48:45 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strncpy(char *dst, const char *src, size_t len)
{
    if (!len)
        return (dst);
    *dst = *src;
    if (!*src)
        *dst = 0;
    return (ft_strncpy(dst + 1, src + 1, len - 1));
}
