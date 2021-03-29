#!/bin/sh

mkdir test0 test2
touch test1 test3 test4

truncate -s 4 test1
truncate -s 1 test3
truncate -s 2 test4

chmod u=rwx,g=x,o=rx test0
chmod u=rwx,g=x,o=r test1
chmod u=rx,g=,o=r test2
chmod u=r,g=,o=r test3
chmod u=rw,g=r,o=x test4

ln test3 test5
ln -s test0 test6

touch -t 202006012047 test0
touch -t 202006012146 test1
touch -t 202006012245 test2
touch -t 202006012344 test3
touch -t 202006012343 test4
touch -ht 202006012220 test6
tar -cf exo2.tar *

chmod 777 test*
rm -rf test0
rm -rf test2
rm test*
