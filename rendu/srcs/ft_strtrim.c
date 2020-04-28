/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 19:18:57 by lsuardi           #+#    #+#             */
/*   Updated: 2020/04/28 20:03:01 by lsuardi          ###   ########.fr       */
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

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	str = (char*)s1;
	while (ft_strchr(set, (int)*str))
	{
		if (!*str)
			return (ft_strdup(str));
		str++;
	}
	ft_strrev(str);
	while (ft_strchr(set, (int)*str))
		str++;
	ft_strrev(str);
	return (ft_strdup(str));
}
