/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:23:50 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 16:58:33 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_bonus.h>

char    *ft_strncat(char *s1, const char *s2, size_t n)
{
    if (!*s1)
        return (ft_strncpy(s1, s2, n));
    return (ft_strncat(s1 + 1, s2, n) - sizeof(char));
}
