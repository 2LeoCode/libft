# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    memmove.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/25 00:44:57 by lsuardi           #+#    #+#              #
#    Updated: 2020/03/26 16:41:41 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

source ./checkDiff.sh
name=memmove
diff=0

gcc -Wall -Wextra -Werror $name/main.c -I includes -L lib -lft -o $name/a.out
gcc -Wall -Wextra -Werror $name/test.c -o $name/test
cd $name

echo ">>> $name <<<"
checkDiff 5 lol 3
checkDiff 10 encule 4
checkDiff 5 enculedefdp 11
checkDiff 50 'test' 111
checkDiff 50 jesuiscon 9
checkDiff 50 lebocalonlesadore 7

if [ $diff = 1 ]
then
    echo 'diff --- KO'
else
    echo 'OK'
fi

rm -f a.out 'test'
