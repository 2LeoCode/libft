/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:23:31 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/27 17:46:50 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	if (!dstsize)
		return (ft_strlen(src));
	if (!*dst)
		return (ft_strlcpy(dst, src, dstsize));
	return (1 + ft_strlcat(dst + 1, src, dstsize - 1));
}
