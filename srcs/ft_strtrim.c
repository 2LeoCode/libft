/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 19:18:57 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 20:01:48 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     cur;
    size_t  size;
    char    *new;

    i = 0;
    while (s1[i])
        if (!ft_isinstr(s1[i++], set))
            size++;
    if (!(new = ft_strnew(sizeof(char) * (size + 1))))
        return NULL;
    i = -1;
    cur = 0;
    while (s1[++i])
        if (!ft_isinstr(s1[i], set))
            new[cur++] = s1[i];
    new[cur] = 0;
    return (new);
}
