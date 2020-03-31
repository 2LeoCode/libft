# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    strncmp.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/26 14:36:36 by lsuardi           #+#    #+#              #
#    Updated: 2020/03/26 16:42:12 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

source ./checkDiff.sh
name=strncmp
diff=0

gcc -Wall -Wextra -Werror $name/main.c -I includes -L lib -lft -o $name/a.out
gcc -Wall -Wextra -Werror $name/test.c -o $name/test
cd $name

echo ">>> $name <<<"
checkDiff abcdefg abcdekj 5
checkDiff abcdefg abcdefghij 7
checkDiff abcd ../scriptscz 4
checkDiff abcd ../scriptssy 3
checkDiff abcd ../scriptscdefg 5
checkDiff abcdef abc 5

if [ $diff = 1 ]
then
    echo 'diff --- KO'
else
    echo 'OK'
fi

rm -f a.out 'test'
