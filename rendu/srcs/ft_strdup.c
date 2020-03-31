/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:22:53 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/29 17:46:10 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s1)
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
