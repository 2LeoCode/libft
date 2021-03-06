/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:22:47 by lsuardi           #+#    #+#             */
/*   Updated: 2020/05/11 18:31:58 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strcpy(char *dst, const char *src)
{
	*dst = *src;
	if (!*src)
		return (dst);
	return (ft_strcpy(dst + 1, src + 1) - sizeof(char));
}
