/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filesize_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 02:22:23 by lsuardi           #+#    #+#             */
/*   Updated: 2020/05/11 18:30:39 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

size_t	ft_filesize(char *path)
{
	int		fd;
	char	c;
	size_t	size;

	if (!(fd = open(path, O_RDONLY)))
	{
		ft_putstr_fd(strerror(errno), STDERR);
		return (0);
	}
	size = 0;
	while (read(fd, &c, 1))
		size++;
	close(fd);
	return (size);
}
