/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:33:56 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 22:46:23 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    if (!start)
        return (ft_strndup(s, len));
    return (ft_substr(s + 1, start - 1, len));
}
