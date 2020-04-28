/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 22:48:01 by lsuardi           #+#    #+#             */
/*   Updated: 2020/04/28 18:30:47 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	if (!len)
		return (dst);
	*dst = *src;
	if (!*src)
		*dst = 0;
	return (ft_strncpy(dst + 1, src + 1, len - 1));
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

static size_t	ft_splitsize(const char *s, char c)
{
	if (*s && *s != c)
		return (ft_splitsize(s + 1, c));
	while (*s == c)
		s++;
	if (!*s)
		return ((*(s - 1) == c) ? 0 : 1);
	return (1 + ft_splitsize(s, c));
}

static size_t	ft_splitlen(const char *s, char c)
{
	if (!*s || *s == c)
		return (0);
	return (1 + ft_splitlen(s + 1, c));
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	size;

	size = ft_splitsize(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*s == c)
			s++;
		if (!(tab[i] = ft_strndup(s, ft_splitlen(s, c))))
			return (NULL);
		i++;
		s += (ft_splitlen(s, c));
	}
	tab[i] = NULL;
	return (tab);
}
