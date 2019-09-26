#shell script to compile program and execute
#!/bin/bash
g++ -Wall -O2 -std=c++14 -static -pipe -o $1 $1.cpp && ./$1 < $1.in > $1.out
