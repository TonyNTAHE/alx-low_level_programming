#/bin/bash
gcc -Werror -Wextra -Wall  -pedantic -std=gnu89 -c  *.c
ar rcs liball.a
ar rcs liball.a *.o
ar -t liball.a
