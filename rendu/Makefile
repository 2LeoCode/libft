# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/24 15:26:22 by lsuardi           #+#    #+#              #
#    Updated: 2020/04/28 21:40:04 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

export NAME		= libft.a
export CFLAGS	= -Wall -Wextra -Werror
_SRCS			= ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii\
ft_isdigit ft_isprint ft_itoa ft_memccpy ft_memchr ft_memcmp ft_memcpy ft_strlen\
ft_memmove ft_memset ft_putchar_fd ft_putendl_fd ft_strncmp ft_putnbr_fd ft_putstr_fd\
ft_split ft_strlcpy ft_strrchr ft_strchr ft_strcpy ft_strdup ft_lstadd_back ft_lstadd_front\
ft_strjoin ft_strlcat ft_strnstr ft_strstr ft_strtrim ft_substr ft_tolower ft_strmapi\
ft_toupper ft_lstclear ft_lstdelone ft_lstiter ft_lstlast ft_lstnew ft_lstsize ft_lstmap
_SRCS_PRE		= $(addprefix srcs/, ${_SRCS})
SRCS			= $(addsuffix .c, ${_SRCS_PRE})
OBJ				= $(SRCS:.c=.o)
B_TARGET		=

ifeq ("$(wildcard ${NAME})", "")
	B_TARGET = all
endif

all: $(NAME)
	@(ranlib $(NAME) && echo 'Successfuly created $(NAME)')

$(NAME): $(OBJ)
	@(echo 'C files compiled' && ar rc $@ $^)

bonus: $(B_TARGET)
	@(cd bonus_files && $(MAKE) && cd ..)

%.o: %.c
	@(echo 'Compiling $<...' && gcc $(CFLAGS) -c $< -o $@ -I includes)

clean:
	@($(foreach i, ${wildcard */*.o */*/*.o}, echo 'Removing ${i}...' && rm -f ${i};) echo 'Removed objects')

fclean: clean
	@(echo 'Removing $(NAME)...' && rm -f $(NAME) && echo 'Removed $(NAME)')

re: fclean all
