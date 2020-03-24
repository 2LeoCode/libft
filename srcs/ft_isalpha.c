/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:21:26 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 19:10:19 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int     ft_isalpha(int c)
{
    if ((char)c < 'A' || ((char)c > 'Z' && (char)c < 'a') || (char)c > 'z')
        return (1);
    return (0);
}
