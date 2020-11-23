#	shell script to compile program and execute
#	execute: bash compile.sh $filename 

#!/bin/bash
g++ -Wall -O2 -std=c++14 -static -pipe -g -o $1 $1.cpp && ./$1 < $1.in > $1.out && more ./$1.out