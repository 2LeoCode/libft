# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    lstadd_back.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/24 23:35:08 by lsuardi           #+#    #+#              #
#    Updated: 2020/03/30 19:40:04 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

source ./checkDiff.sh
name=lstadd_back
diff=0

gcc -Wall -Wextra -Werror $name/main.c -I includes -L lib -lft -o $name/a.out
gcc -Wall -Wextra -Werror $name/test.c -o $name/test
cd $name

echo ">>> $name <<<"
checkDiff bonjour je suis une liste chainee
checkDiff et je vous encule
checkDiff je suis tres chiante a afficher
checkDiff mais cest comme ca

if [ $diff = 1 ]
then
    echo 'diff --- KO'
else
    echo 'OK'
fi

rm -f a.out 'test'
