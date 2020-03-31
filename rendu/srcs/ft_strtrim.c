/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 19:18:57 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/31 02:44:03 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strcat(char *s1, const char *s2)
{
	if (!*s1)
		return (ft_strcpy(s1, s2));
	return (ft_strcat(s1 + 1, s2) - 1);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	if (!*s1 || !*s2 || *s1 != *s2)
		return (*s1 - *s2);
	return (ft_strcmp(s1 + 1, s2 + 1));
}

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	if (!len)
		return (dst);
	*dst = *src;
	if (!*src)
		*dst = 0;
	return (ft_strncpy(dst + 1, src + 1, len - 1) - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		size;

	size = ft_strlen(s1);
	if (!ft_strncmp(s1, set, ft_strlen(set)))
	{
		size -= ft_strlen(set);
		s1 += ft_strlen(set);
	}
	if (!ft_strcmp(s1 + ft_strlen(s1) - ft_strlen(set), set))
		size -= ft_strlen(set);
	if (!(new = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_strncpy(new, s1, ft_strlen(s1) - ft_strlen(set));
	s1 += (ft_strlen(s1) - ft_strlen(set));
	if (!ft_strcmp(s1, set))
		return (new);
	ft_strcat(new, s1);
	new[size] = 0;
	return (new);
}
