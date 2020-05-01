/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:21:01 by lsuardi           #+#    #+#             */
/*   Updated: 2020/04/28 16:26:39 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_isspace(char c)
{
	if (c == '\n' || c == '\t' || c == '\r'
	|| c == '\f' || c == '\v' || c == ' ')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	long	nb;
	long	neg;

	nb = 0;
	neg = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	if (*str == '+')
	{
		if (neg < 0)
			return (0);
		str++;
	}
	while (ft_isdigit(*str))
	{
		nb = 10 * nb + (int)*str - 48;
		str++;
	}
	return ((int)(neg * nb));
}
