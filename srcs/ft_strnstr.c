/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:24:16 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 18:13:08 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if (!len || !*haystack)
        return NULL;
    if (!ft_strncmp(haystack, needle, ft_strlen(needle)))
        return ((char*)haystack);
    return (ft_strnstr(haystack + 1, needle, len - 1));
}
