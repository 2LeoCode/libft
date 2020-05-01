/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 19:18:57 by lsuardi           #+#    #+#             */
/*   Updated: 2020/04/29 19:38:32 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void		ft_swap(char *a, char *b)
{
	char	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static void		ft_strrev(char *str)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	i = 0;
	while (i < (len / 2))
	{
		ft_swap(&str[i], &str[len - 1 - i]);
		i++;
	}
}

static char		*ft_strredup(char *str, char **to_free)
{
	char	*new;

	new = ft_strdup(str);
	free(*to_free);
	*to_free = NULL;
	return (new);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*copy;

	if (!s1 || !(str = ft_strdup((char*)s1)))
		return (NULL);
	copy = str;
	while (ft_strchr(set, (int)*str))
	{
		if (!*str)
			return (ft_strredup(str, &copy));
		str++;
	}
	ft_strrev(str);
	while (ft_strchr(set, (int)*str))
		str++;
	ft_strrev(str);
	return (ft_strredup(str, &copy));
}
