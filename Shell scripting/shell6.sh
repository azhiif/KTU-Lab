#!count no of files starting with a character

echo There are `ls -a | wc -l` files in `pwd`
echo
echo Enter the beginning character
read a
echo
num=`ls -a | grep -c ^$a`
echo There are $num files beginning with $a
[ $num = 0 ] && exit
echo
echo The files are :
echo `ls -a | grep ^$a`