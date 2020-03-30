/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrm_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 17:42:42 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/29 17:46:56 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_bonus.h>

char		*ft_strrm(char const *s1, char const *set)
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
