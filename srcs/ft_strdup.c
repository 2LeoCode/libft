/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:22:53 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 18:04:49 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
char    *ft_strdup(const char *s1)
{
    char *tmp;
    if (!(tmp = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
        return NULL;
    ft_strcpy(tmp, s1);
    return (tmp);
}
