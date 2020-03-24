/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:21:59 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 18:22:00 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;

    str = (unsigned char*)s;
    if (!n)
        return NULL;
    return ((*str == (unsigned char)c) ? str : ft_memchr(s + 1, c, n - 1));
}
