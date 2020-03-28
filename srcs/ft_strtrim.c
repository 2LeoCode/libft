/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 19:18:57 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/27 17:50:05 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static int	ft_isinstr(char const c, char const *str)
{
	if (!*str)
		return (0);
	if (c == *str)
		return (1);
	return (ft_isinstr(c, str + 1));
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		cur;
	size_t	size;
	char	*new;

	i = 0;
	size = 0;
	while (s1[i])
		if (!ft_isinstr(s1[i++], set))
			size++;
	if (!(new = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = -1;
	cur = 0;
	while (s1[++i])
		if (!ft_isinstr(s1[i], set))
			new[cur++] = s1[i];
	new[cur] = 0;
	return (new);
}
