/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:33:56 by lsuardi           #+#    #+#             */
/*   Updated: 2020/05/10 23:37:46 by lsuardi          ###   ########.fr       */
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

static char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	if (!len)
		return (dst);
	*dst = *src;
	if (!*src)
		return (ft_fillend(dst + 1, len - 1));
	return (ft_strncpy(dst + 1, src + 1, len - 1) - 1);
}

static char		*ft_strndup(const char *s1, size_t n)
{
	char	*tmp;

	if (!(tmp = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	ft_strncpy(tmp, s1, n);
	tmp[n] = 0;
	return (tmp);
}

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	if (!s || !*s)
		return (s ? ft_strndup(s, 0) : NULL);
	if (!start)
		return (ft_strndup(s, len));
	return (ft_substr(s + 1, start - 1, len));
}
