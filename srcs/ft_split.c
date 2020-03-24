/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 22:48:01 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 23:16:43 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static size_t   ft_splitsize(const char *s, char c)
{
    if (!*s)
        return ((*(s - 1) == c) ? 0 : 1);
    if (*s == c)
        return (1 + ft_splitsize(s + 1, c));
}

static size_t   ft_splitlen(char const *s, char c)
{
    return ((*s == c) ? 0 : (1 + ft_splitlen(s + 1, c)));
}

char            **ft_split(char const *s, char c)
{
    char    **tab;
    int     i;
    int     j;
    
    if (!(tab = malloc(sizeof(char*) * ft_splitsize(s, c))))
        return NULL;
    i = 0;
    j = 0;
    while (i < ft_splitsize(s, c))
    {
        if (!(tab[i] = ft_strndup(&s[j], ft_splitlen(&s[j], c))))
            return NULL;
        j += ft_strlen(tab[i]) + 1;
    }
    return (tab);
}
