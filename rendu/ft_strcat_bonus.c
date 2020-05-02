/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:22:26 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/29 18:03:46 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_bonus.h>

char	*ft_strcat(char *s1, const char *s2)
{
	if (!*s1)
		return (ft_strcpy(s1, s2));
	return (ft_strcat(s1 + 1, s2) - sizeof(char));
}