/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetoa_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 02:33:02 by lsuardi           #+#    #+#             */
/*   Updated: 2020/05/11 18:30:46 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

char	*ft_filetoa(char *path)
{
	int		fd;
	char	*buf;
	size_t	size;

	if (!(size = ft_filesize(path)))
		return (NULL);
	if (!(fd = open(path, O_RDONLY)))
	{
		ft_putstr_fd(strerror(errno), STDERR);
		return (NULL);
	}
	if (!(buf = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	read(fd, buf, size);
	buf[size] = 0;
	close(fd);
	return (buf);
}
