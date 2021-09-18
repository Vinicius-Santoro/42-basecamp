#!/bin/sh
ls -l | sed -n "p;n"
cat /etc/passwd |
cut -d : -f 1 |
sed -n "p;n" |
tr "\n" ","