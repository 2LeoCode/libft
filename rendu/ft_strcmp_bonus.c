/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:22:43 by lsuardi           #+#    #+#             */
/*   Updated: 2020/05/11 18:31:53 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	if (!*s1 || !*s2 || *s1 != *s2)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (ft_strcmp(s1 + 1, s2 + 1));
}
