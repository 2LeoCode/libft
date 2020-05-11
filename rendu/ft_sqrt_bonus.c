/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 00:23:14 by lsuardi           #+#    #+#             */
/*   Updated: 2020/05/11 18:31:39 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

double	ft_sqrt(double x)
{
	double	calc;
	double	diff;

	if (!x)
		return (0);
	if (x < 0)
		return (0.0 / 0.0);
	diff = x;
	calc = 0.5 * (x + x / x);
	while (diff != calc)
	{
		diff = calc;
		calc = 0.5 * (calc + x / calc);
	}
	return (calc);
}
