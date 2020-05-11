/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:22:53 by lsuardi           #+#    #+#             */
/*   Updated: 2020/05/10 23:44:05 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char		*ft_strcpy(char *dst, const char *src)
{
	*dst = *src;
	if (!*src)
		return (dst);
	return (ft_strcpy(dst + 1, src + 1) - sizeof(char));
}

char			*ft_strdup(const char *s1)
{
	char	*tmp;
	size_t	size;

	size = ft_strlen(s1);
	if (!(tmp = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_strcpy(tmp, s1);
	tmp[size] = 0;
	return (tmp);
}
