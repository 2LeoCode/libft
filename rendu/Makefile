# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/24 15:26:22 by lsuardi           #+#    #+#              #
#    Updated: 2020/05/11 18:44:43 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
CFLAGS			= -Wall -Wextra -Werror
_SRCS			= ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii\
ft_isdigit ft_isprint ft_itoa ft_memccpy ft_memchr ft_memcmp ft_memcpy ft_strlen\
ft_memmove ft_memset ft_putchar_fd ft_putendl_fd ft_strncmp ft_putnbr_fd ft_putstr_fd\
ft_split ft_strlcpy ft_strrchr ft_strchr ft_strdup ft_lstadd_back ft_lstadd_front\
ft_strjoin ft_strlcat ft_strnstr ft_strtrim ft_substr ft_tolower ft_strmapi\
ft_toupper ft_lstclear ft_lstdelone ft_lstiter ft_lstlast ft_lstnew ft_lstsize ft_lstmap
SRCS			= $(addsuffix .c, ${_SRCS})
INC				= libft.h
OBJ				= $(SRCS:.c=.o)
B_TARGET		=
_SRCS_BONUS		= ft_strndup ft_memdel ft_strclr ft_striter ft_striteri ft_strmap\
ft_streq ft_strneq ft_isinstr ft_nbrsize ft_pow ft_sqrt ft_strncat ft_strcat ft_strcmp\
ft_strncpy ft_filesize ft_filetoa ft_strcpy ft_strstr
SRCS_BONUS		= ${addsuffix _bonus.c, $(_SRCS_BONUS)}
OBJ_BONUS		= ${SRCS_BONUS:.c=.o}

ifeq ("$(wildcard ${NAME})", "")
	B_TARGET = all
endif

all: $(NAME)
	@(ranlib $(NAME) && echo 'Successfuly created $(NAME)')

$(NAME): $(OBJ)
	@(echo 'C files compiled' && ar rc $@ $^)

bonus: $(B_TARGET) $(OBJ_BONUS)
	@(ar rcs $(NAME) $(OBJ_BONUS) && echo 'Successfully added bonus files to library')

%_bonus.o: %_bonus.c $(INC)
	@(echo 'Compiling $<...' && gcc $(CFLAGS) -c $< -o $@ -I . -D BONUS)

%.o: %.c $(INC)
	@(echo 'Compiling $<...' && gcc $(CFLAGS) -c $< -o $@ -I .)

clean:
	@($(foreach i, ${wildcard *.o}, echo 'Removing ${i}...' && rm -f ${i};) echo 'Removed objects')

fclean: clean
	@(echo 'Removing $(NAME)...' && rm -f $(NAME) && echo 'Removed $(NAME)')

re: fclean all
