/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinstr_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 19:51:17 by lsuardi           #+#    #+#             */
/*   Updated: 2020/05/11 18:30:53 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_isinstr(char const c, char const *str)
{
	if (!*str)
		return (0);
	if (c == *str)
		return (1);
	return (ft_isinstr(c, str + 1));
}
