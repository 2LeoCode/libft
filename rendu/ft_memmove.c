/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:22:19 by lsuardi           #+#    #+#             */
/*   Updated: 2020/04/29 22:38:07 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!len || (len && !dst && !src))
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	len--;
	((char*)dst)[len] = ((char*)src)[len];
	return (ft_memmove(dst, src, len));
}
