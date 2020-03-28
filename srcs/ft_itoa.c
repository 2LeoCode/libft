/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 23:20:51 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/27 17:32:05 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static void	ft_placenbr(int nb, char *s, int size)
{
	if (!size)
		return ;
	*s = nb % 10 + 48;
	ft_placenbr(nb / 10, s - 1, size - 1);
}

static int	ft_nbrsize(int n)
{
	if (!n)
		return (0);
	return (ft_nbrsize(n / 10));
}

char		*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		size;

	size = ft_nbrsize(n);
	nb = n;
	if (!(str = malloc(size + ((n < 0) ? 2 : 1))))
		return (NULL);
	if (nb < 0)
	{
		*str = '-';
		nb = -nb;
	}
	str[(n > 0) ? size : (size + 1)] = 0;
	ft_placenbr(nb, str + size - ((n < 0) ? 0 : 1), size);
	return (str);
}
