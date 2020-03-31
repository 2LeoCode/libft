# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    memset.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/24 21:41:27 by lsuardi           #+#    #+#              #
#    Updated: 2020/03/26 16:41:46 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

source ./checkDiff.sh
name=memset
diff=0

gcc -Wall -Wextra -Werror $name/main.c -I includes -L lib -lft -o $name/a.out
gcc -Wall -Wextra -Werror $name/test.c -o $name/test
cd $name

echo ">>> $name <<<"
checkDiff 1 5
checkDiff s 8
checkDiff q 50
checkDiff 2 30
checkDiff s 20
checkDiff a 1000
checkDiff s 10

if [ $diff = 1 ]
then
    echo 'diff --- KO'
else
    echo 'OK'
fi

rm -f a.out 'test'
