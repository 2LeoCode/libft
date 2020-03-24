/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:55:40 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 19:14:26 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *new;

    if (!(new = ft_strnew(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
        return NULL;
    ft_strcpy(new, s1);
    ft_strcat(new, s2);
    new[ft_strlen(s1) + ft_strlen(s2)] = 0;
    return (new);
}
