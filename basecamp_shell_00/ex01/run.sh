touch -t 202006012342 testShell00
chmod 777 testShell00
truncate -s 40 testShell00
touch -t 202006012342 testShell00
chmod u=r,g=xr,o=xr testShell00
tar -cf testShell00.tar testShell00
chmod 777 testShell00
rm testShell00
