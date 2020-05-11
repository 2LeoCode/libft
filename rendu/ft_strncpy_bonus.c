/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:23:57 by lsuardi           #+#    #+#             */
/*   Updated: 2020/05/11 18:32:52 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char		*ft_fillend(char *dst, int len)
{
	if (!len)
		return (dst);
	*dst = 0;
	return (ft_fillend(dst + 1, len - 1) - 1);
}

char			*ft_strncpy(char *dst, const char *src, size_t len)
{
	if (!len)
		return (dst);
	*dst = *src;
	if (!*src)
		return (ft_fillend(dst + 1, len - 1));
	return (ft_strncpy(dst + 1, src + 1, len - 1) - 1);
}
