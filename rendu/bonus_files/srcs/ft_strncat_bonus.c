/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:23:50 by lsuardi           #+#    #+#             */
/*   Updated: 2020/04/30 17:25:42 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_bonus.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!*s1)
	{
		while (s2[i] && i < n)
		{
			s1[i] = s2[i];
			i++;
		}
		s1[i] = 0;
		return (s1);
	}
	return (ft_strncat(s1 + 1, s2, n) - 1);
}
