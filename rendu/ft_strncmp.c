/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:23:52 by lsuardi           #+#    #+#             */
/*   Updated: 2020/04/29 21:11:50 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	if (!*s1 || !*s2 || *s1 != *s2)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
}
