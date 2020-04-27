/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 00:23:14 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/28 16:20:42 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_bonus.h>

double	ft_sqrt(double x)
{
	double	calc;
	double	diff;

	if (!x)
		return (0);
	if (x < 0)
		return (NAN);
	diff = x;
	calc = 0.5 * (x + x / x);
	while (diff != calc)
	{
		diff = calc;
		calc = 0.5 * (calc + x / calc);
	}
	return (calc);
}