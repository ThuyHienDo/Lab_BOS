#!/bin/bash
echo -e "Домашний католог пользователя\n$USER\nсодержит обычных файлов:\n"
cd ~
ls -l|grep ^-|wc -l
echo -e "\nскрытых файлов:\n"
find /home/hien98 -maxdepth 1 -name ".*" -type f |wc -l
