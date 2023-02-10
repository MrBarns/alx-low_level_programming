#!/bin/bash
gcc -std=gnu89 -c ./*c \
    | ar -rc liball.a && ranlib liball.a
