/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 15:52:45 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/30 18:32:05 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int		main()
{
	int		fd;
	char	c;

	if (!(fd = open("test.file", O_RDONLY)))
		return (0);
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
	write(1, "$", 1);
	return (0);
}
