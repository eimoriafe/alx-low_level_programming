#!/bin/bash
# Script that creates a static library called liball.a from all the .c files in the current
# directory

gcc -c *.c 
ar -cvq liball.a *.o 
