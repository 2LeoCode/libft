/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:22:29 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 18:22:29 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strrchr(const char *s, int c)
{
    if (!*s)
        return (c ? NULL : s);
    if (*s == (char)c)
        if (!ft_strrchr(s + 1, c))
            return (s);
    return (ft_strrchr(s + 1, c));
}
