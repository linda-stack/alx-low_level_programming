#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative && ./0-positive_or_negative | awk '{print $1, "is", ($1>0)?"positive":($1<0)?"negative":"zero"}'

