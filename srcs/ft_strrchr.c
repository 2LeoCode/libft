/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:22:29 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 17:57:42 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strrchr(const char *s, int c)
{
    if (!*s)
        return (c ? NULL : (char*)s);
    if (*s == (char)c)
        if (!ft_strrchr(s + 1, c))
            return ((char*)s);
    return (ft_strrchr(s + 1, c));
}
