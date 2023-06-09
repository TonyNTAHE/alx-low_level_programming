#/bin/bash
gcc -Werror -Wextra -Wall  -pedantic -std=gnu89 -c -L. *.c
ar -rc liball.a *.o
ranlib liball.a
