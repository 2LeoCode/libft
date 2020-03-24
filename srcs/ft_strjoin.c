/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:55:40 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 18:12:11 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static char *ft_strcat(char *s1, const char *s2)
{
    if (!*s1)
        return (ft_strcpy(s1, s2));
    return (ft_strcat(s1 + 1, s2) - sizeof(char));
}

char        *ft_strjoin(char const *s1, char const *s2)
{
    char    *new;
    size_t  size;

    size = ft_strlen(s1) + ft_strlen(s2);
    if (!(new = (char*)malloc(sizeof(char) * (size + 1))))
        return NULL;
    ft_strcpy(new, s1);
    ft_strcat(new, s2);
    new[size] = 0;
    return (new);
}
