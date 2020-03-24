/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:24:19 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 18:24:20 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strstr(const char *haystack, const char *needle)
{
    if (!*haystack)
        return (NULL);
    if (!ft_strncmp(haystack, needle, ft_strlen(needle)))
        return (haystack);
    return (ft_strstr(haystack + 1, needle + 1));
}
