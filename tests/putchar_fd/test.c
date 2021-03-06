/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 15:27:37 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/30 15:40:50 by lsuardi          ###   ########.fr       */
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
	if (!(read(fd, &c, 1)))
		return (0);
	write(1, &c, 1);
	close(fd);
	return (0);
}
