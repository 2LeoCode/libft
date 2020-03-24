/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 01:22:10 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/24 01:26:13 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    ft_putnbr_fd(int n, int fd)
{
    long nb;
    
    nb = (long)n;
    if (nb < 0)
    {
        write(fd, "-", 1);
        nb = -nb;
    }
    if (nb < 10)
        ft_putchar_fd(nb + 48, fd);
    else
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
}
