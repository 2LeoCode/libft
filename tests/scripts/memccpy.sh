# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    memccpy.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/24 23:52:58 by lsuardi           #+#    #+#              #
#    Updated: 2020/03/26 16:41:23 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

source ./checkDiff.sh
name=memccpy
diff=0

gcc -Wall -Wextra -Werror $name/main.c -I includes -L lib -lft -o $name/a.out
gcc -Wall -Wextra -Werror $name/test.c -o $name/test
cd $name

echo ">>> $name <<<"
checkDiff 10 lol c 3
checkDiff 10 jesuiscontent c 15
checkDiff 10 pasgrave a 8
checkDiff 50 abcdefghijklmnopqrstuvwxyz n 26
checkDiff 20 yoloooooo 0 9

if [ $diff = 1 ]
then
    echo 'diff --- KO'
else
    echo 'OK'
fi

rm -f a.out 'test'
