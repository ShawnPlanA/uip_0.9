#!/bin/sh

echo
echo "[WEB] Start to create fsdata.c!"

[ -f fsdata.c ] && rm -rf fsdata.c
#../apps/httpd/makefsdata chinese
#../apps/httpd/makefsdata en
./makefsdatac
cp  fsdata.c  ../apps/httpd/fsdata.c

echo " OK!"
echo

