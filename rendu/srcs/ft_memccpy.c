/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:21:56 by lsuardi           #+#    #+#             */
/*   Updated: 2020/04/28 17:03:09 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	if (!n)
		return (NULL);
	*d = *s;
	if ((unsigned char)*s == (unsigned char)c)
		return (dst + 1);
	return (ft_memccpy(dst + 1, src + 1, c, n - 1));
}
