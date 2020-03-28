/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:45:27 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/28 16:23:13 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_bonus.h>
#include <stdlib.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*tmp;

	if (!(tmp = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	ft_strncpy(tmp, s1, n);
	tmp[n] = 0;
	return (tmp);
}
