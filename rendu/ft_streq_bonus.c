/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_streq_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:22:56 by lsuardi           #+#    #+#             */
/*   Updated: 2020/04/29 23:03:31 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_bonus.h>

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (1);
	if ((!s1 && s2) || (!s2 && s1))
		return (0);
	return (!ft_strcmp(s1, s2));
}