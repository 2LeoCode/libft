# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    strlen.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/24 23:35:08 by lsuardi           #+#    #+#              #
#    Updated: 2020/03/26 16:42:09 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

source ./checkDiff.sh
name=strlen
diff=0

gcc -Wall -Wextra -Werror $name/main.c -I includes -L lib -lft -o $name/a.out
gcc -Wall -Wextra -Werror $name/test.c -o $name/test
cd $name

echo ">>> $name <<<"
checkDiff abc
checkDiff dwihduwuduwhdiwidhwjdbduw
checkDiff widbsuqduqdbqwdyvwdtvstxvtwvdtwcvdtwysdgqws
checkDiff pqksoqjs
checkDiff qyfs6qwd5sd5qwgxheifvedhewc

if [ $diff = 1 ]
then
    echo 'diff --- KO'
else
    echo 'OK'
fi

rm -f a.out 'test'
