/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 15:41:37 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/30 15:48:48 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
		return (0);
	if (!(fd = open("test.file", O_WRONLY | O_TRUNC)))
		return (0);
	ft_putstr_fd(argv[1], fd);
	close(fd);
	ft_putstr_fd(argv[1], 1);
	return (0);
}
