/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:24:19 by lsuardi           #+#    #+#             */
/*   Updated: 2020/05/11 18:33:11 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (!*haystack && !*needle)
		return ((char*)haystack);
	if (!*haystack)
		return (NULL);
	if (!ft_strncmp(haystack, needle, ft_strlen(needle)))
		return ((char *)haystack);
	return (ft_strstr(haystack + 1, needle));
}
