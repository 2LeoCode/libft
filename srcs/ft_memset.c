/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:22:22 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 19:04:37 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *tmp;

    tmp = b;
    if (!len)
        return (b);
    *tmp = (unsigned char)c;
    b = tmp;
    return (ft_memset(b + 1, c, len - 1));
}
