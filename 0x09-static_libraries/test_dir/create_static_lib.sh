#!/bin/bash

for file in *c; do
	gcc -c "$file"
done

ar rcs liball.a *.o

rm *.o
