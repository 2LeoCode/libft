# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/24 22:36:05 by lsuardi           #+#    #+#              #
#    Updated: 2020/04/27 22:18:13 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

not_tested="calloc.sh isprint.sh"
list="memset.sh bzero.sh memcpy.sh memccpy.sh memmove.sh memchr.sh memcmp.sh \
strlcpy.sh strlcat.sh strchr.sh strrchr.sh strstr.sh strnstr.sh strncmp.sh atoi.sh \
isascii.sh toupper.sh tolower.sh strmapi.sh substr.sh strjoin.sh strtrim.sh \
putstr_fd.sh putendl_fd.sh putnbr_fd.sh strlen.sh strdup.sh strcpy.sh isalpha.sh \
isdigit.sh isalnum.sh split.sh itoa.sh putchar_fd.sh"
bonuslist='lstnew.sh lstadd_back.sh lstadd_front.sh lstlast.sh lstdelone.sh lstclear.sh lstiter.sh lstmap.sh'

bonus=1

if [ $bonus = 1 ]
then
    list="$list $bonuslist"
fi

for name in $list
do
    sh scripts/$name
done
