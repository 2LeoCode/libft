/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:21:01 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/23 19:06:01 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_atoi(const char *str)
{
    char    *s;
    int     nb;
    int     neg;

    nb = 0;
    neg = 1;
    s = (char*)str;
    if (*s == '-')
    {
        neg = -neg;
        s++;
    }
    while (ft_isdigit(*s))
    {
        nb = 10 * nb + (int)*s - 48;
        s++;
    }
    return (neg * nb);
}
