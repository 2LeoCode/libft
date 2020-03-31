# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/24 15:26:17 by lsuardi           #+#    #+#              #
#    Updated: 2020/03/31 03:11:52 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

_SRCS		= ft_strndup ft_memalloc ft_memdel ft_strclr ft_striter ft_striteri ft_strmap\
ft_streq ft_strneq ft_isinstr ft_nbrsize ft_pow ft_sqrt ft_strncat ft_strcat ft_strcmp\
ft_strncpy ft_filesize ft_filetoa
_SRCS_PRE	= ${addprefix srcs/, $(_SRCS)}
SRCS		= ${addsuffix _bonus.c, $(_SRCS_PRE)}
OBJ			= ${SRCS:.c=.o}

all: ${OBJ}
	@echo 'Bonus files added to libft.a'

%.o: %.c
	@gcc ${CFLAGS} -c $< -o $@ -I includes

clean:
	@(rm -f srcs/*.o && cd .. && echo 'Bonus objects removed')
