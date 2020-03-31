# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/24 15:26:22 by lsuardi           #+#    #+#              #
#    Updated: 2020/03/31 03:05:28 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
_SRCS			= ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii\
ft_isdigit ft_isprint ft_itoa ft_memccpy ft_memchr ft_memcmp ft_memcpy ft_strlen\
ft_memmove ft_memset ft_putchar_fd ft_putendl_fd ft_strncmp ft_putnbr_fd ft_putstr_fd\
ft_split ft_strlcpy ft_strrchr ft_strchr ft_strcpy ft_strdup ft_lstadd_back ft_lstadd_front\
ft_strjoin ft_strlcat ft_strnstr ft_strstr ft_strtrim ft_substr ft_tolower ft_strmapi\
ft_toupper ft_lstclear ft_lstdelone ft_lstiter ft_lstlast ft_lstnew ft_lstmap
_SRCS_PRE		= ${addprefix srcs/, $(_SRCS)}
SRCS			= ${addsuffix .c, $(_SRCS_PRE)}
OBJ				= ${SRCS:.c=.o}
_BSRCS			= ft_strndup ft_memalloc ft_memdel ft_strclr ft_striter\
ft_striteri ft_strmap ft_streq ft_strneq ft_isinstr ft_nbrsize ft_pow\
ft_sqrt ft_strncat ft_strcat ft_strcmp ft_strncpy ft_filesize ft_filetoa
_BSRCS_PRE		= ${addprefix bonus/srcs/, $(_BSRCS)}
BSRCS			= ${addsuffix _bonus.c, $(_BSRCS_PRE)}
BOBJ			= ${BSRCS:.c=.o}
export CFLAGS	= -Wall -Wextra -Werror

all: msg ${NAME}
	@(ranlib ${NAME} && echo 'Successfuly created ${NAME}')

msg:
	@echo Compiling...

${NAME}: ${OBJ}
	@(ar rc $@ $^ && echo 'C files compiled')

bonus: all
	@(cd bonus && ${MAKE} && cd .. && ar rcs ${NAME} ${BOBJ})

%.o: %.c
	@gcc ${CFLAGS} -c $< -o $@ -I includes

clean:
	@(rm -f srcs/*.o && cd bonus && ${MAKE} $@ && echo 'Objects removed')

fclean: clean
	@(rm -f ${NAME} && echo 'Removed ${NAME}')

re: fclean all
