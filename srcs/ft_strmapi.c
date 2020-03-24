/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:23:47 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 01:15:07 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *new;
    unsigned int    i;

    if (!(new = ft_strnew(ft_strlen(s) + sizeof(char))))
        return NULL;
    i = 0;
    while (s[i])
        new[i] = (*f)(i, s[i++]);
    new[i] = 0;
    return (new);
}
