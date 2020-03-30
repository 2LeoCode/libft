/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:21:53 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/29 17:43:42 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_bonus.h>

void	ft_memalloc(void **target, size_t size)
{
	char	*init;

	if (!(*target = malloc(size)))
		return ;
	init = (char *)*target;
	while (--size >= 0)
		init[size] = 0;
}
