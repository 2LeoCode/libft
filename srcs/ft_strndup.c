/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:45:27 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 19:01:41 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strndup(const char *s1, size_t len)
{
    char *tmp;

    if (!(tmp = ft_strnew(sizeof(char) * (len + 1))))
        return (NULL);
    ft_strncpy(tmp, s1, len);
    tmp[len] = 0;
    return (tmp);
}
