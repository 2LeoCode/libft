# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    strlcpy.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/24 23:35:08 by lsuardi           #+#    #+#              #
#    Updated: 2020/03/26 16:42:05 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

source ./checkDiff.sh
name=strlcpy
diff=0

gcc -Wall -Wextra -Werror $name/main.c -I includes -L lib -lft -o $name/a.out
gcc -Wall -Wextra -Werror $name/test.c -o $name/test
cd $name

echo ">>> $name <<<"
checkDiff aboubakar lol 3
checkDiff tun encule 4
checkDiff gros enculedefdp 11
checkDiff jsuisunbon 'test' 111
checkDiff zehbi jesuiscon 9
checkDiff ouyouyouy keskejaimalokouy 12
checkDiff bonjour cava 0

if [ $diff = 1 ]
then
    echo 'diff --- KO'
else
    echo 'OK'
fi

rm -f a.out 'test'
