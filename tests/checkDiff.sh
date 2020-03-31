# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    checkDiff.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/26 01:22:47 by lsuardi           #+#    #+#              #
#    Updated: 2020/03/31 02:06:50 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

alias a=./a.out
alias t=./test

function checkDiff ()
{
    ret=`a $*`
    val=`t $*`

    if [ "$ret" != "$val" ]
    then
        echo "./a.out $*"
        a $*
        echo "\nExpected $val got $ret\n"
        diff=1
    fi
}
