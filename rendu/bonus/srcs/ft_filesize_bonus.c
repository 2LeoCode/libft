/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filesize_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 02:22:23 by lsuardi           #+#    #+#             */
/*   Updated: 2020/03/31 02:42:23 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_bonus.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

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
