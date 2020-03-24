/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:23:47 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 18:10:53 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *new;
    int    i;

    if (!(new = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
        return NULL;
    i = -1;
    while (s[++i])
        new[i] = (*f)((unsigned int)i, s[i]);
    new[i] = 0;
    return (new);
}
