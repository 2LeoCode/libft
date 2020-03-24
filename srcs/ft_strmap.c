/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:23:42 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 18:44:12 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strmap(char const *s, char (*f)(char))
{
    char    *new;
    int     i;

    if (!(new = ft_strnew(ft_strlen(s) + sizeof(char))))
        return NULL;
    i = 0;
    while (s[i])
        new[i] = (*f)(s[i++]);
    new[i] = 0;
    return (new);
}
