/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:23:36 by lsuardi           #+#    #+#             */
/*   Updated: 2020/04/29 22:52:09 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (!src || !dst)
		return (0);
	if (!dstsize)
		return (ft_strlen(src));
	*dst = 0;
	if (!*src)
		return (0);
	if (!(dstsize - 1))
		return (ft_strlen(src));
	*dst = *src;
	return (1 + ft_strlcpy(dst + 1, src + 1, dstsize - 1));
}
